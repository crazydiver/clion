# cmake_minimum_required(VERSION <specify CMake version here>)
project(clion)

set(CMAKE_CXX_STANDARD 20)

add_executable(clion main.cpp Fraction.cpp Fraction.h)