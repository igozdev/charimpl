# charimpl
> Compile-time header-only `char` implementation checking for **C++03**/**11**/**14**/**17**/**20**

[![license][badge.license]][license]
[![release][badge.release]][release]
[![godbolt][badge.godbolt]][godbolt]

[badge.license]: https://img.shields.io/badge/license-mit-green.svg
[license]: https://github.com/igozdev/charimpl/blob/main/LICENSE

[badge.release]: https://img.shields.io/github/release/igozdev/charimpl.svg
[release]: https://github.com/igozdev/charimpl/releases/latest

[badge.godbolt]: https://img.shields.io/badge/try_it-on_godbolt-indigo.svg
[godbolt]: https://godbolt.org/z/rGqM1YMsd

# Example
```cpp
#include <iostream>
#include <charimpl/charimpl.hpp>

int main()
{
    std::cout << std::boolalpha
        << charimpl::is_ascii() << std::endl
        << charimpl::is_ebcdic() << std::endl
        << charimpl::is_ebcdic037() << std::endl
        << charimpl::is_ebcdic1047() << std::endl;
}
```

# 
All functions are marked as consteval/constexpr and noexcept if allowed by the compiler.
```c++
bool charimpl::is_ascii(); // Returns true if ASCII encoding is currently in use, false otherwise
bool charimpl::is_ebcdic(); // Returns true if any form of EBCDIC encoding is currently in use, false otherwise
bool charimpl::is_ebcdic037(); // Returns true if EBCDIC037/IBM037 encoding is currently in use, false otherwise
bool charimpl::is_ebcdic273(); // Returns true if EBCDIC273/IBM037 encoding is currently in use, false otherwise
bool charimpl::is_ebcdic1047(); // Returns true if EBCDIC1047/IBM1047 encoding is currently in use, false otherwise
```
```c++
CHARIMPL_ASCII_EXPR // Macro which expands to an expression equal to the result of charimpl::is_ascii()
CHARIMPL_EBCDIC_EXPR // Macro which expands to an expression equal to the result of charimpl::is_ebcdic()
CHARIMPL_EBCDIC037_EXPR // Macro which expands to an expression equal to the result of charimpl::is_ebcdic037()
CHARIMPL_EBCDIC273_EXPR // Macro which expands to an expression equal to the result of charimpl::is_ebcdic273()
CHARIMPL_EBCDIC1047_EXPR // Macro which expands to an expression equal to the result of charimpl::is_ebcdic1047()
```
*Note: Macros should be surrounded with parentheses when used in larger statements in order to avoid potential issues with operator precedence*
