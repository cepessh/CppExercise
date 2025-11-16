#pragma once

#include <string>
#include <vector>

namespace toyarc {

enum class Command {
    None,
    Create,
    List,
    Extract,
};

struct ParsedArgs {
    Command command = Command::None;
    std::string archive;
    std::vector<std::string> files;
};

}  // namespace toyarc

