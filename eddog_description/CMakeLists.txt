cmake_minimum_required(VERSION 3.8)
project(eddog_description)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(eddog_msgs REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)

ament_python_install_package(src)

install(PROGRAMS
  src/fake_oden.py
  src/eddog_gazebo_joint_controller.py
  DESTINATION lib/${PROJECT_NAME}
)


install(
  DIRECTORY meshes urdf launch config src world
  DESTINATION share/${PROJECT_NAME}
)


ament_package()