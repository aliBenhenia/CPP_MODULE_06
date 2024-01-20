#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>
#include <sstream>

class ScalarConverter {
public:
   // Default constructor
    ScalarConverter();

    // Destructor
    ~ScalarConverter();

    // Copy constructor
    ScalarConverter(const ScalarConverter& other);

    // Assignment operator
    ScalarConverter& operator=(const ScalarConverter& other);

    // Conversion method
    static void convert(const std::string& input);

private:
    static char convertToChar(const std::string& input);
    static int convertToInt(const std::string& input);
    static float convertToFloat(const std::string& input);
    static double convertToDouble(const std::string& input);
};

#endif