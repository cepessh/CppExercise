#include <cassert>
#include <cstring>
#include <iostream>

#include "bits.hpp"

static void test_set_bit() {
    assert(set_bit(0u, 0) == 1u);
    assert(set_bit(1u, 2) == 5u);
}

static void test_clear_bit() {
    assert(clear_bit(0xFFu, 0) == 0xFEu);
    assert(clear_bit(0xFFu, 7) == 0x7Fu);
    assert(clear_bit(0x20u, 5) == 0u);
}

static void test_toggle_bit() {
    assert(toggle_bit(0u, 3) == (1u << 3));
    assert(toggle_bit(2u, 1) == 0u);
}

static void test_get_bit() {
    assert(get_bit(0xAAu, 0) == 0);
    assert(get_bit(0xAAu, 1) == 1);
    assert(get_bit(0x80000000u, 31) == 1);
}

static void test_rotate_left() {
    assert(rotate_left(0x1u, 1) == 0x2u);
    assert(rotate_left(0x80000001u, 1) == 0x3u);
    assert(rotate_left(0x12345678u, 8) == 0x34567812u);
}

static void test_rotate_right() {
    assert(rotate_right(0x2u, 1) == 0x1u);
    assert(rotate_right(0x80000001u, 1) == 0xC0000000u);
    assert(rotate_right(0x12345678u, 8) == 0x78123456u);
}

static void test_count_set_bits() {
    assert(count_set_bits(0u) == 0u);
    assert(count_set_bits(0xFFFFFFFFu) == 32u);
    assert(count_set_bits(0xF0F0F0F0u) == 16u);
    assert(count_set_bits(0x12345678u) == 13u);
}

static void test_to_binary_string() {
    char buffer[33];
    const char *expected_zero = "00000000000000000000000000000000";
    const char *expected_pattern = "00000000000000000000000011110000";
    to_binary_string(0u, buffer, sizeof buffer);
    assert(std::strcmp(buffer, expected_zero) == 0);
    to_binary_string(0xF0u, buffer, sizeof buffer);
    assert(std::strcmp(buffer, expected_pattern) == 0);
}

int main() {
    test_set_bit();
    test_clear_bit();
    test_toggle_bit();
    test_get_bit();
    test_rotate_left();
    test_rotate_right();
    test_count_set_bits();
    test_to_binary_string();

    std::cout << "All enabled bit operation tests passed!\n";
    return 0;
}
