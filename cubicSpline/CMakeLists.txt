cmake_minimum_required(VERSION 3.8)
project(cubicSpline)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cubicSpline.cpp cubicSpline.h)
add_executable(cubicSpline ${SOURCE_FILES})