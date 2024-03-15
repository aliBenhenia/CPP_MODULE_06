/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:09:03 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/15 23:21:54 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: Invalid number of arguments" << std::endl;
        return (1);
    }
    try
    {
      ScalarConverter::convert(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: Invalid argument" << std::endl;
        return (1);
    }
    
    return (0);
}