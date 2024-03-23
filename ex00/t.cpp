#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip> // for std::setprecision

class ScalarConverter {
public:
    ScalarConverter(){}

    ScalarConverter(const ScalarConverter &obj){*this = obj;}

    ScalarConverter &operator=(const ScalarConverter &obj)
    {
        (void)obj;
        return *this;
    }

    ~ScalarConverter(){}

     static void convert(const std::string &input)
    {
        // Check if it's a character literal
        if (input.size() == 1)
        {
            char c = input[0];
            std::cout << "char: ";
            if (std::isprint(c))
                std::cout << c << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
            std::cout << "int: " << static_cast<int>(c) << std::endl;
            std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        }
        else
        {
            float floatValue;
            double doubleValue;
            std::istringstream issBuffer(input);

            // Check if it's a special value
            if (input == "nan" || input == "+inf" || input == "-inf")
            {
                std::cout << "char: impossible" << std::endl;
                std::cout << "int: impossible" << std::endl;
                std::cout << "float: " << input << "f" << std::endl;
                std::cout << "double: " << input << std::endl;
                return;
            }

            // Attempt to convert to float
            if (issBuffer >> floatValue)
            {
                // Check if the input is an integer
                if (issBuffer.rdbuf()->in_avail() == 0) {
                    int intValue = static_cast<int>(floatValue);
                    std::cout << "char: impossible" << std::endl;
                    std::cout << "int: " << intValue << std::endl;
                    std::cout << "float: " << floatValue << "f" << std::endl;
                    std::cout << "double: " << floatValue << std::endl;
                }
                else {
                    // Convert to double
                    if (std::istringstream(input) >> doubleValue) {
                        std::cout << "char: impossible" << std::endl;
                        std::cout << "int: impossible" << std::endl;
                        std::cout << "float: " << std::setprecision(std::numeric_limits<float>::digits10 + 1) << floatValue << "f" << std::endl;
                        std::cout << "double: " << std::setprecision(std::numeric_limits<double>::digits10 + 1) << doubleValue << std::endl;
                    }
                    else {
                        std::cout << "Invalid literal" << std::endl;
                    }
                }
            }
            else {
                std::cout << "Invalid literal" << std::endl;
            }
        }
    }
};
int main(int argc, char const *argv[])
{
    ScalarConverter::convert(argv[1]);
    return 0;
}
