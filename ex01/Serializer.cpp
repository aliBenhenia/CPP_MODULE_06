#include "Serializer.hpp"

// Default constructor
Serializer::Serializer() {}

// Copy constructor
Serializer::Serializer(const Serializer& other) {}

// Assignment operator
Serializer& Serializer::operator=(const Serializer& other) {
    return *this;
}

// Destructor
Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}
