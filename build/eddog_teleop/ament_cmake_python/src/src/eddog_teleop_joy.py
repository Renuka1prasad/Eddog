#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import Joy
from eddog_msgs.msg import JoyCtrlCmds
from eddog_definitions import *

import time

class PublishingSubscriber(Node):

    def __init__(self):
        super().__init__('eddog_teleop_gamepad_node')
        self.subscription = self.create_subscription(
            Joy,
            'joy',
            self.topic_callback,
            12)
        self.publisher = self.create_publisher(
            JoyCtrlCmds,
            'eddog_joy_ctrl_cmd',
            40)

        self.t1 = self.t2 = self.t3 = time.perf_counter()
        self.btn_tgl_delay = 3
        self.cmd = JoyCtrlCmds()
        self.LJ_btn_sw = False

    def joy_state_to_joy_cmd(self, msg_joy):
        if not self.cmd.states[0] and msg_joy.buttons[7] and (time.perf_counter() - self.t1 > self.btn_tgl_delay):
            self.cmd.states[0] = True
            self.t1 = time.perf_counter()
        elif self.cmd.states[0] and msg_joy.buttons[7] and (time.perf_counter()- self.t1 > self.btn_tgl_delay):
            self.cmd.states[0] = False
            self.t1 = time.perf_counter()

        if self.cmd.states[0]:
            if not self.cmd.states[1] and msg_joy.buttons[6] and (time.perf_counter() - self.t2 > self.btn_tgl_delay):
                self.cmd.states[1] = True
                self.t2 = time.perf_counter()
            elif self.cmd.states[1] and msg_joy.buttons[6] and (time.perf_counter() - self.t2 > self.btn_tgl_delay):
                self.cmd.states[1] = False
                self.t2 = time.perf_counter()

            if not self.cmd.states[2] and msg_joy.buttons[10] and (time.perf_counter() - self.t3 > self.btn_tgl_delay):
                self.cmd.states[2] = True
                self.t3 = time.perf_counter()
            elif self.cmd.states[2] and msg_joy.buttons[10] and (time.perf_counter() - self.t3 > self.btn_tgl_delay):
                self.cmd.states[2] = False
                self.t3 = time.perf_counter()

            if msg_joy.buttons[0]:
                self.cmd.gait_type = 0
            if msg_joy.buttons[1]:
                self.cmd.gait_type = 1
            if msg_joy.buttons[2]:
                self.cmd.gait_type = 2
            if msg_joy.buttons[3]:
                self.cmd.gait_type = 3

            if self.cmd.pose.position.z < float(MIN_HEIGHT):
                self.cmd.pose.position.z = float(MIN_HEIGHT)
            if self.cmd.pose.position.z > float(MAX_HEIGHT):
                self.cmd.pose.position.z = float(MAX_HEIGHT)
            if not msg_joy.buttons[4] and msg_joy.axes[7] > 0 and self.cmd.pose.position.z < float(MAX_HEIGHT):
                self.cmd.pose.position.z += 5
            if not msg_joy.buttons[4] and msg_joy.axes[7] < 0 and self.cmd.pose.position.z > float(MIN_HEIGHT):
                self.cmd.pose.position.z -= 5

            if self.cmd.states[1] and self.cmd.pose.position.z < 100:
                self.cmd.pose.position.z += 5
                self.cmd.gait_step.z += 5

            if self.cmd.gait_step.z > self.cmd.pose.position.z - float(MIN_HEIGHT):
                self.cmd.gait_step.z = self.cmd.pose.position.z - float(MIN_HEIGHT)
            if msg_joy.buttons[4] and msg_joy.axes[7] > 0 and self.cmd.gait_step.z < self.cmd.pose.position.z - float(MIN_HEIGHT):
                self.cmd.gait_step.z += 5
            if msg_joy.buttons[4] and msg_joy.axes[7] < 0 and self.cmd.gait_step.z > 10:
                self.cmd.gait_step.z -= 5

            if not msg_joy.buttons[9] and not self.LJ_btn_sw:
                self.cmd.pose.orientation.x = -msg_joy.axes[0] * ROLL_RANGE
                self.cmd.pose.orientation.y = msg_joy.axes[1] * PITCH_RANGE
                self.cmd.pose.orientation.z = (msg_joy.axes[2] - msg_joy.axes[5]) / 2 * YAW_RANGE

            self.cmd.gait_step.x = msg_joy.axes[4] * MAX_STEP_LENGTH_X
            self.cmd.gait_step.y = -msg_joy.axes[3] * MAX_STEP_LENGTH_Y

            if msg_joy.buttons[9]:
                self.LJ_btn_sw = True
                if SLANT_X_MIN <= self.cmd.pose.position.x <= SLANT_X_MAX:
                    self.cmd.pose.position.x += msg_joy.axes[1] * 5
                elif self.cmd.pose.position.x < SLANT_X_MIN:
                    self.cmd.pose.position.x = SLANT_X_MIN
                else:
                    self.cmd.pose.position.x = SLANT_X_MAX

                if SLANT_Y_MIN <= self.cmd.pose.position.y <= SLANT_Y_MAX:
                    self.cmd.pose.position.y -= msg_joy.axes[0] * 5
                elif self.cmd.pose.position.y < SLANT_Y_MIN:
                    self.cmd.pose.position.y = SLANT_Y_MIN
                else:
                    self.cmd.pose.position.y = SLANT_Y_MAX

            if msg_joy.axes[0] == 0 and msg_joy.axes[1] == 0:
                self.LJ_btn_sw = False
                
    def topic_callback(self, msg_rx):
        self.joy_state_to_joy_cmd(msg_rx)
        self.publisher.publish(self.cmd)


def main(args=None):
    rclpy.init(args=args)
    node = PublishingSubscriber()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass  # Ignore the KeyboardInterrupt exception when interrupted with Ctrl-C
    finally:
        if rclpy.ok():
            node.destroy_node()
            rclpy.shutdown()
if __name__ == '__main__':
    main()
