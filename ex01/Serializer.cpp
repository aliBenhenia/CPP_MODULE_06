/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 00:18:04 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/16 00:18:18 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void Serializer::serialize(const std::string &input){
    std::ofstream file;
    file.open("serialized.txt");
    file << input;
    file.close();
}