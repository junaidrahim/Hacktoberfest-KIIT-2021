#ifndef COLOR_CODED_HEADER
#define COLOR_CODED_HEADER

#include <ostream>
#include<iostream>
#include<cstring>
#include<cstdlib>

namespace Color {
    enum Code {
        FG_RED      = 31,
        FG_YELLOW   = 33,
        FG_GREEN    = 32,
        FG_BLUE     = 34,
        FG_DEFAULT  = 39,
        BG_RED      = 41,
        BG_YELLOW   = 43,
        BG_GREEN    = 42,
        BG_BLUE     = 44,
        BG_DEFAULT  = 49
    };
    class Modifier {
        Code code;
    public:
        Modifier(Code pCode) : code(pCode) {}
        friend std::ostream&
        operator<<(std::ostream& os, const Modifier& mod) {
            return os << "\033[" << mod.code << "m";
        }
    };
}

#endif

// ref : https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal

// ANSI COLOR CODES FOR C AND C++

/*
Black           30  40
Red             31  41
Green           32  42
Yellow          33  43
Blue            34  44
Magenta         35  45
Cyan            36  46
White           37  47
Bright Black    90  100
Bright Red      91  101
Bright Green    92  102
Bright Yellow   93  103
Bright Blue     94  104
Bright Magenta  95  105
Bright Cyan     96  106
Bright White    97  107
*/