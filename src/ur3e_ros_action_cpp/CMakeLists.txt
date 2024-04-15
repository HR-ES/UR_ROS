cmake_minimum_required(VERSION 3.8)
project(ur3e_ros_action_cpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ur3e_ros_data REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(moveit_core REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# moveJ_action.cpp:
add_executable(moveJ_action src/moveJ_action.cpp)
ament_target_dependencies(
  moveJ_action
  moveit_ros_planning_interface
  moveit_core
  std_msgs
  rclcpp
  rclcpp_action
  ur3e_ros_data)
install(TARGETS
  moveJ_action
  DESTINATION lib/${PROJECT_NAME})

# moveL_action.cpp:
add_executable(moveL_action src/moveL_action.cpp)
ament_target_dependencies(
  moveL_action
  moveit_ros_planning_interface
  moveit_core
  std_msgs
  rclcpp
  rclcpp_action
  ur3e_ros_data)
install(TARGETS
  moveL_action
  DESTINATION lib/${PROJECT_NAME})

  # moveXYZW_action.cpp:
add_executable(moveXYZW_action src/moveXYZW_action.cpp)
ament_target_dependencies(
  moveXYZW_action
  moveit_ros_planning_interface
  moveit_core
  std_msgs
  rclcpp
  rclcpp_action
  ur3e_ros_data)
install(TARGETS
  moveXYZW_action
  DESTINATION lib/${PROJECT_NAME})

    # moveXYZ_action.cpp:
add_executable(moveXYZ_action src/moveXYZ_action.cpp)
ament_target_dependencies(
  moveXYZ_action
  moveit_ros_planning_interface
  moveit_core
  std_msgs
  rclcpp
  rclcpp_action
  ur3e_ros_data)
install(TARGETS
  moveXYZ_action
  DESTINATION lib/${PROJECT_NAME})

ament_package()
