#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include "Data.hpp"

class Serializer {
public:
    // Default constructor
    Serializer();

    // Copy constructor
    Serializer(const Serializer& other);

    // Assignment operator
    Serializer& operator=(const Serializer& other);

    // Destructor
    ~Serializer();

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif
