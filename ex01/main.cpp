/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 00:21:19 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/30 02:45:27 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    //  // Test 1: Serialize and deserialize a null pointer
    uintptr_t raw = Serializer::serialize(nullptr);
    Data *ptr = Serializer::deserialize(raw);
    std::cout << "Value: " << ptr << std::endl;
    
    std::cout << "--------------------------------" << std::endl;
    //// Test 2: Serialize and deserialize a valid pointer
    Data data(42);
    uintptr_t raw2 = Serializer::serialize(&data);
    Data *ptr2 = Serializer::deserialize(raw2);
    std::cout << "Value: " << ptr2->getValue() << std::endl;

    std::cout << "--------------------------------" << std::endl;

    // test 3
    Data *ptr3 = new Data(67);
    uintptr_t raw3 = Serializer::serialize(ptr3);
    Data *ptr4 = Serializer::deserialize(raw3);
    std::cout << "Value: " << ptr4->getValue() << std::endl;
    
    std::cout << "--------------------------------" << std::endl;
    // Test 3: Serialize and deserialize multiple objects
    Data data1(10);
    Data data2(20);
    uintptr_t serializedPtr1 = Serializer::serialize(&data1);
    uintptr_t serializedPtr2 = Serializer::serialize(&data2);
    Data* deserializedPtr1 = Serializer::deserialize(serializedPtr1);
    Data* deserializedPtr2 = Serializer::deserialize(serializedPtr2);
    std::cout << "Value: " << deserializedPtr1->getValue() << std::endl;
    std::cout << "Value: " << deserializedPtr2->getValue() << std::endl;
    return 0;
}