cmake_minimum_required(VERSION 3.8)
project(BUPT-Client)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC on)

find_package(Qt5 REQUIRED Network Widgets Core)

add_subdirectory(include/cpr)

include_directories(${CPR_INCLUDE_DIRS})

set(SOURCE_FILES src/main.cpp)
add_executable(BUPT-Client ${SOURCE_FILES})

target_link_libraries(BUPT-Client Qt5::Network Qt5::Widgets Qt5::Core ${CPR_LIBRARIES})
target_link_libraries(BUPT-Client ${CPR_LIBRARIES})
