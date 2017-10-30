cmake_minimum_required(VERSION 3.7)
project(BUPT-Client)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC on)

# Add Qt5 library. If you are not install from apt, please manually add Qt5 path prefix.
find_package(Qt5 REQUIRED Widgets)

set(SOURCE_FILES src/main.cpp src/mainwindow.cpp src/mainwindow.h)
add_executable(BUPT-Client ${SOURCE_FILES})

target_link_libraries(BUPT-Client Qt5::Widgets)
