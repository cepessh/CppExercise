#include "bits.hpp"

std::uint32_t set_bit(std::uint32_t value, unsigned position) {
    (void)position;
    return value;
}

std::uint32_t clear_bit(std::uint32_t value, unsigned position) {
    (void)position;
    return value;
}

std::uint32_t toggle_bit(std::uint32_t value, unsigned position) {
    return (1u << position) ^ value;
}

int get_bit(std::uint32_t value, unsigned position) {
    (void)value;
    (void)position;
    return 0;
}

std::uint32_t rotate_left(std::uint32_t value, unsigned shift) {
    (void)shift;
    return value;
}

std::uint32_t rotate_right(std::uint32_t value, unsigned shift) {
    (void)shift;
    return value;
}

unsigned count_set_bits(std::uint32_t value) {
    (void)value;
    return 0;
}

void to_binary_string(std::uint32_t value, char *buffer, std::size_t buffer_size) {
    (void)value;
    (void)buffer;
    if (buffer_size > 0) {
        buffer[0] = '\0';
    }
}
