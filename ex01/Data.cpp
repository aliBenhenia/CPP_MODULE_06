/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 00:32:11 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/17 00:53:05 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp"
Data::Data(){}
Data::Data(int val)
{
    this->value = val;
}
Data::Data(const Data &src)
{
    this->value = src.value;
}
Data &Data::operator=(const Data &src)
{
    this->value = src.value;
    return (*this);
}
int Data::getValue() const
{
    return (this->value);
}
Data::~Data(){}