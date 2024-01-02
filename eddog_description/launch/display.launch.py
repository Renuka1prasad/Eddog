# Import necessary modules
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, LaunchConfiguration
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Declare launch arguments
    model_arg = DeclareLaunchArgument(
        name="model",
        default_value=os.path.join(get_package_share_directory("eddog_description"), "urdf", "eddog.urdf.xacro"),
        description="Absolute path to the robot URDF file"
    )

    # Parameter for robot description
    robot_description = ParameterValue(Command(["xacro ", LaunchConfiguration("model")]))

    # Nodes
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description": robot_description}]
    )

    joint_state_publisher_gui = Node(
        package="joint_state_publisher_gui",
        executable="joint_state_publisher_gui"
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        arguments=["-d", os.path.join(get_package_share_directory("eddog_description"), "config", "display.rviz")]
    )

    # Add RealSense camera node
    realsense_camera_node = Node(
        package="eddog_cam",  # Replace with your actual package name
        executable="realsense_camera_node.py",  # Replace with the actual executable name
        output="screen",
    )

    # Return the LaunchDescription with all nodes and arguments
    return LaunchDescription([
        model_arg,
        robot_state_publisher,
        joint_state_publisher_gui,
        rviz_node,
        realsense_camera_node,  # Include RealSense camera node
    ])
