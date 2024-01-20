#include "ScalarConverter.hpp"


int main() {
    // Test cases
    ScalarConverter::convert("65"); // 'A'
    ScalarConverter::convert("97.5"); // 'a', 97, 97.5, 97.5
    ScalarConverter::convert("42"); // '*', 42, 42.0, 42.0
    ScalarConverter::convert("non_displayable"); // Non displayable
    ScalarConverter::convert("impossible"); // impossible
    ScalarConverter::convert("nan"); // impossible, impossible, nanf, nan

    return 0;
}