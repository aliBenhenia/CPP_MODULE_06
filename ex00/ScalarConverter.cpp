/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:09:08 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/16 14:03:10 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}
void ScalarConverter::convert(const std::string &input)
{   
    //check if it's a character literal
    if (input.empty())
    {
        std::cout << "Invalid literal" << std::endl;
        return;
    }
    // if (input.size() == 3 && input.at(0) == '\'' && input.at(2) == '\'')
    if (input.size() == 1)
    {
        char c = input.at(0);
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
        int                 intValue;
        float               floatValue;
        double              doubleValue;
        std::istringstream  issBuffer(input);
        if (input == "nan" || input == "+inf" || input == "-inf")
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << input << "f" << std::endl;
            std::cout << "double: " << input << std::endl;
            return;
        }
        //check if it's an integer literal and what if it's a floating-point literal also?? is will pass
        if (issBuffer >> intValue)
        {
            // check if float or double and should skip and pass the float and double check
            if (issBuffer.rdbuf()->in_avail() == 0)
            {
                std::cout << "char: ";
                if (std::isprint(static_cast<char>(intValue)))
                    std::cout << static_cast<char>(intValue) << std::endl;
                else
                    std::cout << "Non displayable" << std::endl;
                std::cout << "int: " << intValue << std::endl;
                std::cout << "float: " << static_cast<float>(intValue) << ".0f" << std::endl;
                std::cout << "double: " << static_cast<double>(intValue) << ".0" << std::endl;
                return;
            }
        }
        if (issBuffer.clear(), issBuffer.seekg(0), issBuffer >> floatValue)
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