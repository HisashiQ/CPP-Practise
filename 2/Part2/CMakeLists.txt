cmake_minimum_required(VERSION 3.6)
project(Part2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CurrentAccount.cpp CurrentAccount.h SavingsAccount.cpp SavingsAccount.h)
add_executable(Part2 ${SOURCE_FILES})