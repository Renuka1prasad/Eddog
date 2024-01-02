#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy, Imu, Image, CameraInfo
from std_msgs.msg import Float64MultiArray
from Scripts.RobotController import RobotController
from Scripts.InverseKinematics import robot_IK

USE_IMU = True
RATE = 60

class EdDogController(Node):
    def __init__(self):
        super().__init__('Robot_Controller')

        # Robot geometry
        body = [0.1908, 0.080]
        legs = [0.0, 0.04, 0.100, 0.094333]

        self.robot = RobotController.Robot(body, legs, USE_IMU)
        self.inverseKinematics = robot_IK.InverseKinematics(body, legs)

        self.pub = self.create_publisher(Float64MultiArray, 'eddog_jointController/commands', 30)
        self.joint_angs = Float64MultiArray()

        # Subscribe to camera topics
        self.create_subscription(Image, 'camera/image_raw', self.image_callback, 10)
        self.create_subscription(CameraInfo, 'camera/camera_info', self.camera_info_callback, 10)

        if USE_IMU:
            self.create_subscription(Imu, "/imu/data", self.imu_callback, 10)
        self.create_subscription(Joy, "/joy_ramped", self.joystick_cmd, 10)
        
        # self.rate = self.create_rate(RATE)
        self.timer = self.create_timer(1.0 / RATE, self.run)

    def imu_callback(self, msg):
        self.robot.imu_callback(msg)

    def joystick_cmd(self, msg):
        self.robot.joystick_cmd(msg)
        #self.run()

    def image_callback(self, msg):
        # Process the image data here
        # You can access the image data using msg.data
        pass

    def camera_info_callback(self, msg):
        # Process the camera info data here
        # You can access camera info parameters like msg.width, msg.height, etc.
        pass

    def run(self):

        leg_positions = self.robot.run()
        self.robot.change_controller()

        dx = self.robot.state.body_local_position[0]
        dy = self.robot.state.body_local_position[1]
        dz = self.robot.state.body_local_position[2]
    
        roll = self.robot.state.body_local_orientation[0]
        pitch = self.robot.state.body_local_orientation[1]
        yaw = self.robot.state.body_local_orientation[2]

        try:
            joint_angles = self.inverseKinematics.inverse_kinematics(leg_positions,dx, dy, dz, roll, pitch, yaw)

            self.joint_angs.data = [
                    joint_angles[0] * 180 / 3.141592653589793, -joint_angles[1] * 180 / 3.141592653589793 , joint_angles[2] * 180 / 3.141592653589793, 
                    joint_angles[3] * 180 / 3.141592653589793, -joint_angles[4] * 180 / 3.141592653589793, joint_angles[5] * 180 / 3.141592653589793,
                    joint_angles[6] * 180 / 3.141592653589793, -joint_angles[7] * 180 / 3.141592653589793, joint_angles[8] * 180 / 3.141592653589793,
                    joint_angles[9] * 180 / 3.141592653589793, -joint_angles[10] * 180 / 3.141592653589793, joint_angles[11] * 180 / 3.141592653589793
                ]
            #print(self.joint_angs)
            #self.get_logger().info(f"Joint Angles: {self.joint_angs}")

            self.pub.publish(self.joint_angs)

        except Exception as e:
            self.get_logger().error(f"Error in inverse kinematics calculation: {str(e)}")
            self.joint_angs.data = [
                    0.0, 90, 0.0,
                    0.0, 90, 0.0,
                    0.0, 90, 0.0,
                    0.0, 90, 0.0
                ]
            #self.get_logger().info(f"Joint Angles: {self.joint_angs}")
            self.pub.publish(self.joint_angs)

        #self.rate.sleep()

def main(args=None):
    rclpy.init(args=args)
    eddog=EdDogController()
    rclpy.spin(eddog)
    eddog.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
