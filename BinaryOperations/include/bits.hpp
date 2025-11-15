#pragma once

#include <cstddef>
#include <cstdint>

std::uint32_t set_bit(std::uint32_t value, unsigned position);

std::uint32_t clear_bit(std::uint32_t value, unsigned position);

std::uint32_t toggle_bit(std::uint32_t value, unsigned position);

int get_bit(std::uint32_t value, unsigned position);

std::uint32_t rotate_left(std::uint32_t value, unsigned shift);

std::uint32_t rotate_right(std::uint32_t value, unsigned shift);

unsigned count_set_bits(std::uint32_t value);

void to_binary_string(std::uint32_t value, char *buffer, std::size_t buffer_size);
