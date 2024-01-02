#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
from nav_msgs.msg import Odometry
from eddog_msgs.msg import JoyCtrlCmds
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, TwistStamped
from std_msgs.msg import Header

class FakeOdom(Node):

    def __init__(self):
        super().__init__('Fake_odom_node')

        self.subscription = self.create_subscription(
            #JoyCtrlCmds,
            'eddog_joy_ctrl_cmd',
            self.topic_callback,
            30)
        self.publisher = self.create_publisher(
            Odometry,
            'odom',
            30)

        self.odom_x = 0
        self.odom_y = 0
        self.odom_rot = 0
        self.pi = 3.14159

    def topic_callback(self, msg):
        odom = Odometry()
        x = msg.gait_step.x / 1000
        y = msg.gait_step.y / 1000
        side_walk = msg.states[2]

        if not side_walk:
            self.odom_x += x
            self.odom_y += y

        if side_walk and y > 0:
            self.odom_x += x
            self.odom_y += y / 2
            self.odom_rot += y

            if self.odom_rot >= 2 * self.pi:
                self.odom_rot -= 2 * self.pi
            elif self.odom_rot <= -2 * self.pi:
                self.odom_rot += 2 * self.pi

        odom.pose.pose.position = Point(x=self.odom_x, y=self.odom_y, z=0)
        odom.pose.pose.orientation = Quaternion(x=0, y=0, z=self.odom_rot, w=1)
        odom.header = Header(frame_id='odom')
        odom.child_frame_id = 'base_link'

        self.publisher.publish(odom)


def main(args=None):
    rclpy.init(args=args)
    fake_odom_node = FakeOdom()
    rclpy.spin(fake_odom_node)
    fake_odom_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
