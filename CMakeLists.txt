cmake_minimum_required(VERSION 3.28)
project(Inventario)

set(CMAKE_CXX_STANDARD 17)

add_executable(Inventario main.cpp
        Inventory.cpp
        Inventory.h
        History.cpp
        History.h)
