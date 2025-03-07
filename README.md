# overload.cpp

- `overload.cpp` is a project that helps make it easier to implement the `visitor pattern` in `C++17`.
- When using 'std::visit', you can easily overload multiple lambda functions (anonymous functions) to create concise processing for different types. 

### How to use

- Include the `overload.hpp` header file in the project.
- When using `std::visit`, use the 'overload' structure to overload multiple lambda functions.

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

### License

- MIT License
 
### Contact

- Leave me a issue.
   - https://github.com/JayTwoLab/overload.cpp

