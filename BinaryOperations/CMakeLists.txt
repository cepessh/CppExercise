cmake_minimum_required(VERSION 3.16)

project(BinaryOperations LANGUAGES CXX VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(bits STATIC
    src/bits.cpp
)
target_include_directories(bits PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(bits_tests tests/bits_tests.cpp)
target_link_libraries(bits_tests PRIVATE bits)

enable_testing()
add_test(NAME bits_tests COMMAND bits_tests)
