cmake_minimum_required(VERSION 2.8.3)
project(testpackage)


find_package(catkin REQUIRED COMPONENTS
  nav_msgs
  roscpp
  std_msgs
)


catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES testpackage
#  CATKIN_DEPENDS nav_msgs roscpp std_msgs
#  DEPENDS system_lib
)


include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)


add_executable(testnode src/test.cpp)

target_link_libraries(testnode ${catkin_LIBRARIES})
