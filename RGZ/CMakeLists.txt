cmake_minimum_required(VERSION 3.19)
project(RGZ)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(RGZ
        Container.cpp
        Container.h
        Controller.cpp
        Controller.h
        main.cpp
        Menu.cpp
        Menu.h
        Shoes.cpp
        Shoes.h)
