/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 00:18:04 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/30 02:37:00 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{  
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data* ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}