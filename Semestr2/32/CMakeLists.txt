cmake_minimum_required(VERSION 3.19)
project(32)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(32
        Container.hpp
        main.cpp
        Shoes.cpp
        Shoes.h)
