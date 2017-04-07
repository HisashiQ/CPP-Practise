cmake_minimum_required(VERSION 3.6)
project(Lab2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Customer.cpp Customer.h StandardParcel.cpp StandardParcel.h TwoDayParcel.cpp TwoDayParcel.h NextDayParcel.cpp NextDayParcel.h)
add_executable(untitled ${SOURCE_FILES})