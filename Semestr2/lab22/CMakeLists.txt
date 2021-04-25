cmake_minimum_required(VERSION 3.19)
project(lab22 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(lab22
        src/lib.c
        src/lib.h
        src/main.c
        test.c)
