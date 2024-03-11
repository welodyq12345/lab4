cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp
        Client.cpp
        Client.h
        Asoortment.cpp
        Asoortment.h
        Employee.cpp
        Employee.h)
