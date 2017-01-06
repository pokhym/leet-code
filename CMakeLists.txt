cmake_minimum_required(VERSION 3.6)
project(leet-code)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp questions/1-TwoSum.h questions/2-AddTwoNumbers.h)

add_definitions(-D_2-AddTwoNumbers)

add_executable(leet-code ${SOURCE_FILES})