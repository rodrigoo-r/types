cmake_minimum_required(VERSION 3.30)
project(types C)

set(CMAKE_C_STANDARD 11)

add_library(types SHARED library.c)
