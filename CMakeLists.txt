cmake_minimum_required(VERSION 3.8)
project(BasicC__)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Concert.cpp Concert.h)
add_executable(BasicC__ ${SOURCE_FILES})