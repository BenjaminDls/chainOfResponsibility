cmake_minimum_required(VERSION 3.21)
project(chainOfResponsibility)

set(CMAKE_CXX_STANDARD 17)

add_executable(chainOfResponsibility main.cpp
        ActionCOR.h Definitions.h
        Action1COR.cpp Action1COR.h
        Action2COR.cpp Action2COR.h)
