cmake_minimum_required(VERSION 3.19)
project(31)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(31
        Container.hpp
        main.cpp
        Shoes.cpp
        Shoes.h)
