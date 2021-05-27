cmake_minimum_required(VERSION 3.19)
project(lab28)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab28
        Exersise.cpp
        Exersise.h
        main.cpp
        Menu.cpp
        Menu.h)
