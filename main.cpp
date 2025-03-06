
#include <iostream>
#include <variant>
#include <string>

#include "overload.hpp"

int main() {
    std::variant<int, std::string> v; // integer type or string type

    v = 42;
    std::visit(overload{
                   [](int i) { std::cout << "[1] Integer type: " << i << '\n'; },
                   [](const std::string& s) { std::cout << "[1] String type: " << s << '\n'; }
               }, v);

    v = "Hello";
    std::visit(overload{
                   [](int i) { std::cout << "[2] Integer type: " << i << '\n'; },
                   [](const std::string& s) { std::cout << "[2] String type: " << s << '\n'; }
               }, v);

    return 0;
}
