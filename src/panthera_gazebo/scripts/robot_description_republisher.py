#!/usr/bin/env python3

import time

import rclpy
from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, QoSProfile, ReliabilityPolicy
from std_msgs.msg import String


class RobotDescriptionRepublisher(Node):
    """Repeat the transient robot description during Gazebo control startup."""

    def __init__(self):
        super().__init__('robot_description_republisher')
        self.declare_parameter('robot_description', '')
        self.declare_parameter('publish_duration', 20.0)

        self._description = self.get_parameter('robot_description').value
        self._deadline = time.monotonic() + self.get_parameter('publish_duration').value
        self.done = False

        qos = QoSProfile(depth=1)
        qos.reliability = ReliabilityPolicy.RELIABLE
        qos.durability = DurabilityPolicy.TRANSIENT_LOCAL
        self._publisher = self.create_publisher(String, 'robot_description', qos)
        self._timer = self.create_timer(0.5, self._publish)

    def _publish(self):
        if time.monotonic() >= self._deadline:
            self.destroy_timer(self._timer)
            self.done = True
            return

        message = String()
        message.data = self._description
        self._publisher.publish(message)


def main(args=None):
    rclpy.init(args=args)
    node = RobotDescriptionRepublisher()
    try:
        while rclpy.ok() and not node.done:
            rclpy.spin_once(node, timeout_sec=0.5)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
