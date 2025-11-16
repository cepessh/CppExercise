#pragma once

#include <cstddef>
#include <string>

namespace copyfile {

// Заглушка интерфейса: в будущем сюда можно вынести
// функцию поблочного копирования.
std::size_t copy_file(const std::string& input, const std::string& output);

}  // namespace copyfile

