cmake_minimum_required(VERSION 3.30)
project(types C)

set(CMAKE_C_STANDARD 11)

add_library(types STATIC fluent_libc/types.c)
target_include_directories(types PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})