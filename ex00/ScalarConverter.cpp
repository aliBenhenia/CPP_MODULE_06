/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:09:08 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/14 23:05:51 by abenheni         ###   ########.fr       */
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
    std::cout << "Convert " << input << std::endl;
   
}