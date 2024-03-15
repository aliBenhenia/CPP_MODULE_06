/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:09:08 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/15 17:50:39 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}
//     Class Structure: You're asked to create a class named ScalarConverter. It should have a single static method named convert. This method will handle the conversion of various types of literals.

// Method Signature: The convert method should take a string representation of a C++ literal as its parameter.

// Conversion Types: The method needs to output the value of the input literal in four different scalar types: char, int, float, and double.

// Handling Non-Displayable Characters: If the input is a char literal and it's non-displayable, the method should print an informative message indicating that it's non-displayable.

// Handling Invalid Conversions: If a conversion doesn't make sense or overflows (for example, converting a string like "abc" to an integer), the method should inform the user that the conversion is impossible.

// Handling Special Values: Special values like positive and negative infinity (inf, -inf) and NaN (not a number) should also be handled for float and double literals.

// Testing: After implementing the ScalarConverter class, you need to write a test program. This program should take the input literal from the command line, pass it to the convert method of ScalarConverter, and print the results in the specified format.
void ScalarConverter::convert(const std::string &input)
{
    //check if it's a character literal
    if (input.size() == 3 && input.at(0) == '\'' && input.at(2) == '\'')
    {
        char c = input.at(1);
        std::cout << "char: ";
        if (std::isprint(c))
            std::cout << c << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << std::endl;
    }
    else
    {
        int                 intValue;
        float               floatValue;
        double              doubleValue;
        std::istringstream  issBuffer(input);
        if (issBuffer >> intValue)
        {
            if (std::isprint(static_cast<char>(intValue)))
                std::cout << "char: " << static_cast<char>(intValue) << std::endl;
            else
                std::cout << "char: impossible" << std::endl;
            std::cout << "int: " << intValue << std::endl;
            std::cout << "float: " << static_cast<float>(intValue) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(intValue) << ".0" << std::endl;
        }
        else if (issBuffer.clear(), issBuffer.seekg(0), issBuffer >> floatValue)
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << floatValue << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(floatValue) << std::endl;
        }
        else if (issBuffer.clear(), issBuffer.seekg(0), issBuffer >> doubleValue)
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: " << doubleValue << std::endl;
        }
        else
            std::cout << "Invalid literal" << std::endl;
    }
    
}