cmake_minimum_required(VERSION 3.19)
project(22 C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(22
        src/lib.c
        src/lib.h
        src/main.c)
