// MIT License
// 
// Copyright (c) 2023 igozdev
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include <charimpl/impl/ebcdic.hpp>

#define CHARIMPL_EBCDIC037_EXPR \
    CHARIMPL_EBCDIC_EXPR && \
    '!'     == static_cast<char>(0x5A) && \
    '$'     == static_cast<char>(0x5B) && \
    '`'     == static_cast<char>(0x79) && \
    '#'     == static_cast<char>(0x7B) && \
    '@'     == static_cast<char>(0x7C) && \
    '~'     == static_cast<char>(0xA1) && \
    '^'     == static_cast<char>(0xB0) && \
    '['     == static_cast<char>(0xBA) && \
    ']'     == static_cast<char>(0xBB) && \
    '{'     == static_cast<char>(0xC0) && \
    '}'     == static_cast<char>(0xD0) && \
    '\\'    == static_cast<char>(0xE0)

namespace charimpl
{
#if defined(__cpp_consteval)
    consteval
#elif defined(__cpp_constexpr)
    constexpr
#else
    inline
#endif
        bool is_ebcdic037()
#if defined(__cpp_noexcept_function_type)
        noexcept
#endif
    {
        return CHARIMPL_EBCDIC037_EXPR;
    }
}