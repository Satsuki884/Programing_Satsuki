cmake_minimum_required(VERSION 3.19)
project(30)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(30
        Container.cpp
        Container.h
        main.cpp
        Shoes.cpp
        Shoes.h)
