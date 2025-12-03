#include "string_ops.h"

// inefficient reverse (appends char by char)
std::string reverseString(const std::string& s) {
    std::string out = "";
    for (int i = s.size() - 1; i >= 0; --i) {
        out += s[i]; // repeated reallocation
    }
    return out;
}
