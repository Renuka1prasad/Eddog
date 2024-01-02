#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray, Float64MultiArray
from std_msgs.msg import Header
from rclpy.qos import QoSProfile
from std_msgs.msg import Float32MultiArray

class EdDogGazeboJointCtrl(Node):

    def __init__(self):
        super().__init__('Eddog_gazebo_joint_ctrl_node')

        self.subscription = self.create_subscription(
            Float64MultiArray,
            'eddog_jointController/commands',
            self.topic_callback,
            30)
        self.publisher = self.create_publisher(
            Float64MultiArray,
            'gazebo_joint_controller/commands',
            30)

    def topic_callback(self, msg_rx):
        joint_angles = Float64MultiArray()
        for ang in msg_rx.data:
            joint_angles.data.append(ang * 3.141592653589793 / 180)  # Convert to radians
        self.publisher.publish(joint_angles)


def main(args=None):
    rclpy.init(args=args)
    eddog_node = EdDogGazeboJointCtrl()
    rclpy.spin(eddog_node)
    eddog_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
