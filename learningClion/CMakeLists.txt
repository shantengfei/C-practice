cmake_minimum_required(VERSION 3.8)
project(learningClion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cmake-build-debug/method.h cmake-build-debug/method.cpp)
add_executable(learningClion ${SOURCE_FILES})