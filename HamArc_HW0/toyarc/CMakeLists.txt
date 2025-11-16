cmake_minimum_required(VERSION 3.16)

project(toyarc LANGUAGES CXX)

add_executable(toyarc
    src/main.cpp
)

target_include_directories(toyarc PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

