// overload.hpp

#ifndef OVERLOAD_HPP
#define OVERLOAD_HPP

// C++17 or higher version
#include <utility>

template <typename... Ts>
struct overload : Ts... {
    using Ts::operator()...;
};

template <typename... Ts>
overload(Ts...) -> overload<Ts...>;

#endif // OVERLOAD_HPP
