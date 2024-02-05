cmake_minimum_required(VERSION 3.26)
project(M1OEP_jrdonova)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(M1OEP_jrdonova
        main.cpp
        Bolt_Hole_Pattern.h
        Bolt_Hole_Pattern.cpp
)
