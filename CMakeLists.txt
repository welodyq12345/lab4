cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp
        classes/Client.cpp
        classes/Client.h
        classes/Asoortment.cpp
        classes/Asoortment.h
        classes/Employee.cpp
        classes/Employee.h
        classes/People.cpp
        classes/People.h
        classes/Jaz.cpp
        classes/Jaz.h
        classes/Rock.cpp
        classes/Rock.h)
