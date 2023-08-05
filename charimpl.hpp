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

// impl/ascii.hpp

#define CHARIMPL_ASCII_EXPR \
        '\a'    == static_cast<char>(0x07) && \
        '\b'    == static_cast<char>(0x08) && \
        '\t'    == static_cast<char>(0x09) && \
        '\n'    == static_cast<char>(0x0A) && \
        '\v'    == static_cast<char>(0x0B) && \
        '\f'    == static_cast<char>(0x0C) && \
        '\r'    == static_cast<char>(0x0D) && \
        ' '     == static_cast<char>(0x20) && \
        '!'     == static_cast<char>(0x21) && \
        '\"'    == static_cast<char>(0x22) && \
        '#'     == static_cast<char>(0x23) && \
        '$'     == static_cast<char>(0x24) && \
        '%'     == static_cast<char>(0x25) && \
        '&'     == static_cast<char>(0x26) && \
        '\''    == static_cast<char>(0x27) && \
        '('     == static_cast<char>(0x28) && \
        ')'     == static_cast<char>(0x29) && \
        '*'     == static_cast<char>(0x2A) && \
        '+'     == static_cast<char>(0x2B) && \
        ','     == static_cast<char>(0x2C) && \
        '-'     == static_cast<char>(0x2D) && \
        '.'     == static_cast<char>(0x2E) && \
        '/'     == static_cast<char>(0x2F) && \
        '0'     == static_cast<char>(0x30) && \
        '1'     == static_cast<char>(0x31) && \
        '2'     == static_cast<char>(0x32) && \
        '3'     == static_cast<char>(0x33) && \
        '4'     == static_cast<char>(0x34) && \
        '5'     == static_cast<char>(0x35) && \
        '6'     == static_cast<char>(0x36) && \
        '7'     == static_cast<char>(0x37) && \
        '8'     == static_cast<char>(0x38) && \
        '9'     == static_cast<char>(0x39) && \
        ':'     == static_cast<char>(0x3A) && \
        ';'     == static_cast<char>(0x3B) && \
        '<'     == static_cast<char>(0x3C) && \
        '='     == static_cast<char>(0x3D) && \
        '>'     == static_cast<char>(0x3E) && \
        '?'     == static_cast<char>(0x3F) && \
        '@'     == static_cast<char>(0x40) && \
        'A'     == static_cast<char>(0x41) && \
        'B'     == static_cast<char>(0x42) && \
        'C'     == static_cast<char>(0x43) && \
        'D'     == static_cast<char>(0x44) && \
        'E'     == static_cast<char>(0x45) && \
        'F'     == static_cast<char>(0x46) && \
        'G'     == static_cast<char>(0x47) && \
        'H'     == static_cast<char>(0x48) && \
        'I'     == static_cast<char>(0x49) && \
        'J'     == static_cast<char>(0x4A) && \
        'K'     == static_cast<char>(0x4B) && \
        'L'     == static_cast<char>(0x4C) && \
        'M'     == static_cast<char>(0x4D) && \
        'N'     == static_cast<char>(0x4E) && \
        'O'     == static_cast<char>(0x4F) && \
        'P'     == static_cast<char>(0x50) && \
        'Q'     == static_cast<char>(0x51) && \
        'R'     == static_cast<char>(0x52) && \
        'S'     == static_cast<char>(0x53) && \
        'T'     == static_cast<char>(0x54) && \
        'U'     == static_cast<char>(0x55) && \
        'V'     == static_cast<char>(0x56) && \
        'W'     == static_cast<char>(0x57) && \
        'X'     == static_cast<char>(0x58) && \
        'Y'     == static_cast<char>(0x59) && \
        'Z'     == static_cast<char>(0x5A) && \
        '['     == static_cast<char>(0x5B) && \
        '\\'    == static_cast<char>(0x5C) && \
        ']'     == static_cast<char>(0x5D) && \
        '^'     == static_cast<char>(0x5E) && \
        '_'     == static_cast<char>(0x5F) && \
        '`'     == static_cast<char>(0x60) && \
        'a'     == static_cast<char>(0x61) && \
        'b'     == static_cast<char>(0x62) && \
        'c'     == static_cast<char>(0x63) && \
        'd'     == static_cast<char>(0x64) && \
        'e'     == static_cast<char>(0x65) && \
        'f'     == static_cast<char>(0x66) && \
        'g'     == static_cast<char>(0x67) && \
        'h'     == static_cast<char>(0x68) && \
        'i'     == static_cast<char>(0x69) && \
        'j'     == static_cast<char>(0x6A) && \
        'k'     == static_cast<char>(0x6B) && \
        'l'     == static_cast<char>(0x6C) && \
        'm'     == static_cast<char>(0x6D) && \
        'n'     == static_cast<char>(0x6E) && \
        'o'     == static_cast<char>(0x6F) && \
        'p'     == static_cast<char>(0x70) && \
        'q'     == static_cast<char>(0x71) && \
        'r'     == static_cast<char>(0x72) && \
        's'     == static_cast<char>(0x73) && \
        't'     == static_cast<char>(0x74) && \
        'u'     == static_cast<char>(0x75) && \
        'v'     == static_cast<char>(0x76) && \
        'w'     == static_cast<char>(0x77) && \
        'x'     == static_cast<char>(0x78) && \
        'y'     == static_cast<char>(0x79) && \
        'z'     == static_cast<char>(0x7A) && \
        '{'     == static_cast<char>(0x7B) && \
        '|'     == static_cast<char>(0x7C) && \
        '}'     == static_cast<char>(0x7D) && \
        '~'     == static_cast<char>(0x7E)

namespace charimpl
{
#if defined(__cpp_consteval)
    consteval
#elif defined(__cpp_constexpr)
    constexpr
#else
    inline
#endif
        bool is_ascii()
#if defined(__cpp_noexcept_function_type)
        noexcept
#endif
    {
        return CHARIMPL_ASCII_EXPR;
    }
}

// impl/ebcdic.hpp

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

// impl/ebcdic037.hpp

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

// impl/ebcdic273.hpp

#define CHARIMPL_EBCDIC273_EXPR \
    CHARIMPL_EBCDIC_EXPR && \
    '!'     == static_cast<char>(0x4F) && \
    '$'     == static_cast<char>(0x5B) && \
    '`'     == static_cast<char>(0x79) && \
    '#'     == static_cast<char>(0x7B) && \
    '@'     == static_cast<char>(0xB5) && \
    '~'     == static_cast<char>(0x59) && \
    '^'     == static_cast<char>(0x5F) && \
    '['     == static_cast<char>(0x63) && \
    ']'     == static_cast<char>(0xFC) && \
    '{'     == static_cast<char>(0x43) && \
    '}'     == static_cast<char>(0xDC) && \
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
        bool is_ebcdic273()
#if defined(__cpp_noexcept_function_type)
        noexcept
#endif
    {
        return CHARIMPL_EBCDIC273_EXPR;
    }
}

// impl/ebcdic1047.hpp

#define CHARIMPL_EBCDIC1047_EXPR \
    CHARIMPL_EBCDIC_EXPR && \
    '!'     == static_cast<char>(0x5A) && \
    '$'     == static_cast<char>(0x5B) && \
    '`'     == static_cast<char>(0x79) && \
    '#'     == static_cast<char>(0x7B) && \
    '@'     == static_cast<char>(0x7C) && \
    '~'     == static_cast<char>(0xA1) && \
    '^'     == static_cast<char>(0x5F) && \
    '['     == static_cast<char>(0xAD) && \
    ']'     == static_cast<char>(0xBD) && \
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
        bool is_ebcdic1047()
#if defined(__cpp_noexcept_function_type)
        noexcept
#endif
    {
        return CHARIMPL_EBCDIC1047_EXPR;
    }
}