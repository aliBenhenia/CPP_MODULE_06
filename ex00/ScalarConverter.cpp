/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 01:20:14 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/29 22:01:43 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

int checkNumber(const std::string &input)
{
    if (input.length() == 1 && !isdigit(input[0]))
        return (0);
    size_t i = 0;
    if (input[i] == '+' || input[i] == '-')
        i++;
    while (i < input.length())
    {
        if (!isdigit(input[i]))
            return (0);
        i++;
    }
    return (INT_);
}

int checkChar(const std::string &input)
{
    if (input.length() != 1)
        return (0);
    if (!isprint(input[0]))
        return (0);
    return (CHAR_);
}

int checkFloat(const std::string &input)
{
    if (input.length() == 1 && !isdigit(input[0]))
        return (0);
    if (input == "inff" || input == "+inff" || input == "-inff" || input == "nanf")
        return (FLOAT_);
    int dotFlag = 0;
    std::string inputFloat = input;
    if (input[0] == '+' || input[0] == '-')
        inputFloat = input.substr(1);
    if (input.back() == 'f')
        inputFloat = input.substr(0, input.length() - 1);
    size_t i = 0;
    while (i < inputFloat.length())
    {
        if (inputFloat[i] == '.')
            dotFlag++;
        if (!isdigit(inputFloat[i]) && inputFloat[i] != '.')
            return (0);
        i++;
    }
    if (dotFlag > 1 || dotFlag == 0)
        return (0);
    return (FLOAT_);
}

int checkDouble(const std::string &input)
{
    int dotFlag = 0;
    if (input.length() == 1 && !isdigit(input[0]))
        return (0);
    if (input == "inf" || input == "+inf" || input == "-inf" || input == "nan")
        return (DOUBLE_);
    size_t i = 0;
    while (i < input.length())
    {
        if (input[i] == '.')
            dotFlag++;
        if (!isdigit(input[i]) && input[i] != '.')
            return (0);
        i++;
    }
    if (dotFlag > 1 || dotFlag == 0)
        return (0);
    return (DOUBLE_);
}

int ScalarConverter::checkValidInput(const std::string &input)
{
    if (checkNumber(input))
        return (INT_);
    else if (checkChar(input))
        return (CHAR_);
    else if (checkFloat(input))
        return (FLOAT_);
    else if (checkDouble(input))
        return (DOUBLE_);
    else
        return (0);
}

void handleNumber(const std::string &input)
{
    int num;
    
    num = atoi(input.c_str());
    std::cout << "char: ";
    if (num < 32 || num > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
    std::cout << "int: " << num << std::endl;
    std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
}

void handleChar(const std::string &input)
{
    char c = input[0];
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

int containOnlyZeros(std::string input)
{
    int i;

    i = 0;
    std::string precesion = input.substr(input.find('.') + 1);
    while (precesion[i])
    {
        if (precesion[i] != '0')
            return (0);
        i++;
    }
    return (1);
}

void printFLoat(std::string inputFloat)
{
    int f;
    std::stringstream ss(inputFloat);
    ss >> f;
    std::cout << "char: ";
    if (f < 32 || f > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
}

void handleFloat(const std::string &input)
{
    std::string inputFloat = input;
    if (input.back() == 'f')
        inputFloat = input.substr(0, input.length() - 1);
    if (inputFloat == "inff" || inputFloat == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << inputFloat << "f" << std::endl;
        std::cout << "double: " << inputFloat << std::endl;
        return;
    }
    if (input == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }
    float f;
    if (containOnlyZeros(inputFloat))
    {
        printFLoat(inputFloat);
        return;
    }
    std::stringstream ss(inputFloat);
    ss >> f;
    std::cout << "char: ";
    if (f < 32 || f > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void handleDouble(const std::string &input)
{
    std::string inputDouble = input;
    if (input.back() == 'f')
        inputDouble = input.substr(0, input.length() - 1);
    if (inputDouble == "inff" || inputDouble == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << inputDouble << "f" << std::endl;
        std::cout << "double: " << inputDouble << std::endl;
        return;
    }
    if (inputDouble == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }
    double d;
    std::stringstream ss(inputDouble);
    ss >> d;
    std::cout << "char: ";
    if (d < 32 || d > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}


void ScalarConverter::convert(const std::string &input)
{
    int type = checkValidInput(input);

    if (type)
    {
        if (type == INT_)
            handleNumber(input);
        else if (type == CHAR_)
            handleChar(input);
        else if (type == FLOAT_)
            handleFloat(input);
        else if (type == DOUBLE_)
            handleDouble(input);
    }
    else
        std::cout << "Invalid type" << std::endl;
}