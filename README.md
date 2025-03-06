# overload.cpp

- C++ overload header for visitor pattern
- How to use : just include `overload.hpp`

### Sample code

- Code 

```cpp
#include <iostream>
#include <variant>
#include <string>

#include "overload.hpp" // [0] Just Include overload header.

int main() {
    std::variant<int, std::string> v; // v is integer type or string type.

    v = 42; // [1] Set integer type
    std::visit(overload{
                   [](int i) { std::cout << "[1] Integer type: " << i << '\n'; },
                   [](const std::string& s) { std::cout << "[1] String type: " << s << '\n'; }
               }, v);

    v = "Hello";  // [2] Set string type
    std::visit(overload{
                   [](int i) { std::cout << "[2] Integer type: " << i << '\n'; },
                   [](const std::string& s) { std::cout << "[2] String type: " << s << '\n'; }
               }, v);

    return 0;
}
```

- Output

```
[1] Integer type: 42
[2] String type: Hello
```

