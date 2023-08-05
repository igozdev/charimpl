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

#define CHARIMPL_EBCDIC_EXPR \
        '\a'    == static_cast<char>(0x2F) && \
        '\b'    == static_cast<char>(0x16) && \
        '\t'    == static_cast<char>(0x05) && \
        '\n'    == static_cast<char>(0x25) && \
        '\v'    == static_cast<char>(0x0B) && \
        '\f'    == static_cast<char>(0x0C) && \
        '\r'    == static_cast<char>(0x0D) && \
        ' '     == static_cast<char>(0x40) && \
        '.'     == static_cast<char>(0x4B) && \
        '<'     == static_cast<char>(0x4C) && \
        '('     == static_cast<char>(0x4D) && \
        '+'     == static_cast<char>(0x4E) && \
        '&'     == static_cast<char>(0x50) && \
        '*'     == static_cast<char>(0x5C) && \
        ')'     == static_cast<char>(0x5D) && \
        ';'     == static_cast<char>(0x5E) && \
        '-'     == static_cast<char>(0x60) && \
        '/'     == static_cast<char>(0x61) && \
        ','     == static_cast<char>(0x6B) && \
        '%'     == static_cast<char>(0x6C) && \
        '_'     == static_cast<char>(0x6D) && \
        '>'     == static_cast<char>(0x6E) && \
        '?'     == static_cast<char>(0x6F) && \
        ':'     == static_cast<char>(0x7A) && \
        '\''    == static_cast<char>(0x7D) && \
        '='     == static_cast<char>(0x7E) && \
        '\"'    == static_cast<char>(0x7F) && \
        'a'     == static_cast<char>(0x81) && \
        'b'     == static_cast<char>(0x82) && \
        'c'     == static_cast<char>(0x83) && \
        'd'     == static_cast<char>(0x84) && \
        'e'     == static_cast<char>(0x85) && \
        'f'     == static_cast<char>(0x86) && \
        'g'     == static_cast<char>(0x87) && \
        'h'     == static_cast<char>(0x88) && \
        'i'     == static_cast<char>(0x89) && \
        'j'     == static_cast<char>(0x91) && \
        'k'     == static_cast<char>(0x92) && \
        'l'     == static_cast<char>(0x93) && \
        'm'     == static_cast<char>(0x94) && \
        'n'     == static_cast<char>(0x95) && \
        'o'     == static_cast<char>(0x96) && \
        'p'     == static_cast<char>(0x97) && \
        'q'     == static_cast<char>(0x98) && \
        'r'     == static_cast<char>(0x99) && \
        's'     == static_cast<char>(0xA2) && \
        't'     == static_cast<char>(0xA3) && \
        'u'     == static_cast<char>(0xA4) && \
        'v'     == static_cast<char>(0xA5) && \
        'w'     == static_cast<char>(0xA6) && \
        'x'     == static_cast<char>(0xA7) && \
        'y'     == static_cast<char>(0xA8) && \
        'z'     == static_cast<char>(0xA9) && \
        'A'     == static_cast<char>(0xC1) && \
        'B'     == static_cast<char>(0xC2) && \
        'C'     == static_cast<char>(0xC3) && \
        'D'     == static_cast<char>(0xC4) && \
        'E'     == static_cast<char>(0xC5) && \
        'F'     == static_cast<char>(0xC6) && \
        'G'     == static_cast<char>(0xC7) && \
        'H'     == static_cast<char>(0xC8) && \
        'I'     == static_cast<char>(0xC9) && \
        'J'     == static_cast<char>(0xD1) && \
        'K'     == static_cast<char>(0xD2) && \
        'L'     == static_cast<char>(0xD3) && \
        'M'     == static_cast<char>(0xD4) && \
        'N'     == static_cast<char>(0xD5) && \
        'O'     == static_cast<char>(0xD6) && \
        'P'     == static_cast<char>(0xD7) && \
        'Q'     == static_cast<char>(0xD8) && \
        'R'     == static_cast<char>(0xD9) && \
        'S'     == static_cast<char>(0xE2) && \
        'T'     == static_cast<char>(0xE3) && \
        'U'     == static_cast<char>(0xE4) && \
        'V'     == static_cast<char>(0xE5) && \
        'W'     == static_cast<char>(0xE6) && \
        'X'     == static_cast<char>(0xE7) && \
        'Y'     == static_cast<char>(0xE8) && \
        'Z'     == static_cast<char>(0xE9) && \
        '0'     == static_cast<char>(0xF0) && \
        '1'     == static_cast<char>(0xF1) && \
        '2'     == static_cast<char>(0xF2) && \
        '3'     == static_cast<char>(0xF3) && \
        '4'     == static_cast<char>(0xF4) && \
        '5'     == static_cast<char>(0xF5) && \
        '6'     == static_cast<char>(0xF6) && \
        '7'     == static_cast<char>(0xF7) && \
        '8'     == static_cast<char>(0xF8) && \
        '9'     == static_cast<char>(0xF9)

namespace charimpl
{
#if defined(__cpp_consteval)
    consteval
#elif defined(__cpp_constexpr)
    constexpr
#else
    inline
#endif
        bool is_ebcdic()
#if defined(__cpp_noexcept_function_type)
        noexcept
#endif
    {
        return CHARIMPL_EBCDIC_EXPR;
    }
}