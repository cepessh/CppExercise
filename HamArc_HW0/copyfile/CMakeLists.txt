cmake_minimum_required(VERSION 3.16)

project(copyfile LANGUAGES CXX)

add_executable(copyfile
    src/main.cpp
)

target_include_directories(copyfile PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

