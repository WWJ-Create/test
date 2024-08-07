cmake_minimum_required(VERSION 3.5)
project(lib1)
file(GLOB H ${CMAKE_CURRENT_SOURCE_DIR}/teacherstudent.cpp)
add_library(LIB1 SHARED ${H})

