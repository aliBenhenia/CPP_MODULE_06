#include "ScalarConverter.hpp"


int main() {
    // Test cases
    ScalarConverter::convert("65"); // 'A'
    std:: cout << "***********************************************" << std::endl;
    ScalarConverter::convert("97.5"); // 'a', 97, 97.5, 97.5
    std:: cout << "***********************************************" << std::endl;
    ScalarConverter::convert("42"); // '*', 42, 42.0, 42.0
    std:: cout << "***********************************************" << std::endl;
    ScalarConverter::convert("non_displayable"); // Non displayable
    std:: cout << "***********************************************" << std::endl;
    ScalarConverter::convert("impossible"); // impossible
    std:: cout << "***********************************************" << std::endl;
    ScalarConverter::convert("nan"); // impossible, impossible, nanf, nan
    std:: cout << "***********************************************" << std::endl;

    return 0;
}