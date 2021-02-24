#include <iostream>

namespace nstd {
std::string name = "nstd";
}

inline namespace aa {
std::string name = "inline namespace";
}

int main() {
    std::cout << name;
}