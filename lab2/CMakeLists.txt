cmake_minimum_required(VERSION 3.20)
project(lab2)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab2 main.cpp cmake-build-debug/lab2.cpp cmake-build-debug/lab2.h cmake-build-debug/menu.cpp
        cmake-build-debug/menu.h)
