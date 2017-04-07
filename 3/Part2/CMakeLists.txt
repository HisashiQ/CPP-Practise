cmake_minimum_required(VERSION 3.6)
project(Part2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Shape.h Circle.cpp Circle.h Oval.cpp Oval.h Square.cpp Square.h Rectangle.cpp Rectangle.h Triangle.cpp Triangle.h)
add_executable(Part2 ${SOURCE_FILES})