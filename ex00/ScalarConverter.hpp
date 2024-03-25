/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:09:10 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/25 17:56:22 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <sstream>

#define NUMBER_ 1
#define CHAR_ 2
#define FLOAT_ 3
#define DOUBLE_ 4


class ScalarConverter{
    public:
        static void convert(const std::string &input);
        static int checkValidInput(const std::string &input);
        ScalarConverter &operator=(const ScalarConverter &obj);
        ~ScalarConverter();
    private:
        ScalarConverter(const ScalarConverter &obj);
        ScalarConverter();
        
  
};


int     checkNumber(const std::string &input);
int     checkChar(const std::string &input);
int     checkFloat(const std::string &input);
int     checkDouble(const std::string &input);
int     containOnlyZeros(std::string input);

void    handleNumber(const std::string &input);
void    handleChar(const std::string &input);
void    printFLoat(std::string inputFloat);
void    handleFloat(const std::string &input);
void    handleDouble(const std::string &input);

#endif
