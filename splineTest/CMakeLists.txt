cmake_minimum_required(VERSION 3.8)
project(splineTest)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cmake-build-debug/cubicSpline.cpp cmake-build-debug/cubicSpline.h)
add_executable(splineTest ${SOURCE_FILES})