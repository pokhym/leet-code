cmake_minimum_required(VERSION 3.6)
project(leet-code)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp questions/1-TwoSum.h)

add_definitions(-D_1-TwoSum)

add_executable(leet-code ${SOURCE_FILES})