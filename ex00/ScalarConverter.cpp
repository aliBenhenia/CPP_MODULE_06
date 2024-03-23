/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 01:20:14 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/23 18:34:38 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
    return (NUMBER_);
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
    int dotFlag = 0;
    if (input.length() == 1 && !isdigit(input[0]))
        return (0);
    size_t i = 0;
    while (i < input.length())
    {
        if (input[i] == '.')
            dotFlag++;
        if (!isdigit(input[i]) && input[i] != '.')
            return (0);
        i++;
    }
    if (dotFlag > 1)
        return (0);
    return (FLOAT_);
}

int checkDouble(const std::string &input)
{
    int dotFlag = 0;
    if (input.length() == 1 && !isdigit(input[0]))
        return (0);
    size_t i = 0;
    while (i < input.length())
    {
        if (input[i] == '.')
            dotFlag++;
        if (!isdigit(input[i]) && input[i] != '.')
            return (0);
        i++;
    }
    if (dotFlag > 1)
        return (0);
    return (DOUBLE_);
}

int ScalarConverter::checkValidInput(const std::string &input)
{
    if (checkNumber(input))
        return (NUMBER_);
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

void handleFloat(const std::string &input)
{
    std::string inputFloat = input;
    if (input.back() == 'f')
    {
        // remove the f at the end
        inputFloat = input.substr(0, input.length() - 1);
    }
    float f;
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
    
}


void ScalarConverter::convert(const std::string &input)
{
    int type = checkValidInput(input);

    if (type)
    {
        if (type == NUMBER_)
            handleNumber(input);
        else if (type == CHAR_)
            handleChar(input);
        else if (type == FLOAT_)
            handleFloat(input);
        else if (type == DOUBLE_)
            handleDouble(input);
    }
    else
        std::cout << "Invalid input" << std::endl;
}