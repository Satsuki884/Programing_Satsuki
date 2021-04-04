cmake_minimum_required(VERSION 3.17)
project(lab19 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(lab19
        1.c
        lib1.c
        lib1.h)
