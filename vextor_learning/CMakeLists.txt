cmake_minimum_required(VERSION 3.8)
project(vextor_learning)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cmake-build-debug/SalraySys.cpp cmake-build-debug/SalraySys.h)
add_executable(vextor_learning ${SOURCE_FILES})