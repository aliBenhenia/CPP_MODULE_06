/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 00:21:19 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/17 01:07:57 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    //  // Test 1: Serialize and deserialize a null pointer
    uintptr_t raw = Serializer::serialize(nullptr);
    Data *ptr = Serializer::deserialize(raw);
    std::cout << "Value: " << ptr << std::endl;
    
    //// Test 2: Serialize and deserialize a valid pointer
    Data data(42);
    uintptr_t raw2 = Serializer::serialize(&data);
    Data *ptr2 = Serializer::deserialize(raw2);
    std::cout << "Value: " << ptr2->getValue() << std::endl;
    
    // Test 3: Serialize and deserialize multiple objects
    Data data1(10);
    Data data2(20);
    uintptr_t serializedPtr1 = Serializer::serialize(&data1);
    uintptr_t serializedPtr2 = Serializer::serialize(&data2);
    Data* deserializedPtr1 = Serializer::deserialize(serializedPtr1);
    Data* deserializedPtr2 = Serializer::deserialize(serializedPtr2);
    std::cout << "Value: " << deserializedPtr1->getValue() << std::endl;
    std::cout << "Value: " << deserializedPtr2->getValue() << std::endl;
    // Data data2(42);
    // // Data *data1 = new Data(42);
    // uintptr_t raw = Serializer::serialize(&data2);
    // std::cout << "Raw: " << raw << std::endl;
    // Data *ptr = Serializer::deserialize(raw);
    // std::cout << "Value: " << ptr->getValue() << std::endl;
    return 0;
}