# charimpl
> Compile-time header-only `char` implementation checking for **C++03**/**11**/**14**/**17**/**20**

[![license][badge.license]][license]
[![release][badge.release]][release]
[![godbolt][badge.godbolt]][godbolt]

[badge.license]: https://img.shields.io/badge/license-mit-blue.svg
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
