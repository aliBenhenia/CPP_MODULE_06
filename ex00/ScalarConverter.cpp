#include "ScalarConverter.hpp"

// Default constructor
ScalarConverter::ScalarConverter() {
    // Implement if needed
}

// Destructor
ScalarConverter::~ScalarConverter() {
    // Implement if needed
}

// Copy constructor
ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    (void)other;
    // Implement if needed
}

// Assignment operator
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    (void)other;
    if (this != &other) {
        // Implement if needed
    }
    return *this;
}

void ScalarConverter::convert(const std::string& input) {
    char c;
    int i;
    float f;
    double d;

    // Convert to char
    try {
        c = ScalarConverter::convertToChar(input);
        std::cout << "char: '" << c << "'" << std::endl;
    } catch (std::exception& e) {
        std::cerr << "char: " << e.what() << std::endl;
    }

    // Convert to int
    try {
        i = ScalarConverter::convertToInt(input);
        std::cout << "int: " << i << std::endl;
    } catch (std::exception& e) {
        std::cerr << "int: " << e.what() << std::endl;
    }

    // Convert to float
    try {
        f = ScalarConverter::convertToFloat(input);
        std::cout << "float: " << f << "f" << std::endl;
    } catch (std::exception& e) {
        std::cerr << "float: " << e.what() << std::endl;
    }

    // Convert to double
    try {
        d = ScalarConverter::convertToDouble(input);
        std::cout << "double: " << d << std::endl;
    } catch (std::exception& e) {
        std::cerr << "double: " << e.what() << std::endl;
    }
}

char ScalarConverter::convertToChar(const std::string& input) {
    // Convert string to char
    if (input.length() == 1 && isprint(input[0]))
        return input[0];
    throw std::runtime_error("Non displayable");
}

int ScalarConverter::convertToInt(const std::string& input) {
    // Convert string to int
    std::istringstream stream(input);
    int result;
    stream >> result;
    if (stream.fail() || !stream.eof())
        throw std::runtime_error("impossible");
    return result;
}

float ScalarConverter::convertToFloat(const std::string& input) {
    // Convert string to float
    std::istringstream stream(input);
    float result;
    stream >> result;
    if (stream.fail() || !stream.eof())
        throw std::runtime_error("impossible");
    return result;
}

double ScalarConverter::convertToDouble(const std::string& input) {
    // Convert string to double
    std::istringstream stream(input);
    double result;
    stream >> result;
    if (stream.fail() || !stream.eof())
        throw std::runtime_error("impossible");
    return result;
}