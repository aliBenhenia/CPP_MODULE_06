/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 00:14:32 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/30 00:33:18 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>
#include "Data.hpp"
class Serializer{
    private:
        Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
#endif
