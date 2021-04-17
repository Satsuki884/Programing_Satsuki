cmake_minimum_required(VERSION 3.19)
project(lab21 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(lab21
        StaticLib/complex.c
        StaticLib/complex.h
        StaticLib/test_complex.c
        StaticLib/main.c
        StaticLib/lib.h
        StaticLib/lib.c
        StaticLib/entity.c
        StaticProject/entity.h
        StaticProject/main.c
        StaticProject/lib.h
        StaticProject/lib.c
        StaticProject/entity.c
        StaticProject/entity.h
        ShareLib/main.c
        ShareLib/lib.h
        ShareLib/lib.c
        ShareLib/list.c
        ShareProject/list.h
        ShareProject/main.c
        ShareProject/lib.h
        ShareProject/lib.c
        ShareProject/list.c
        ShareProject/list.h)
