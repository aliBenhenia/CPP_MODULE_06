#include "Data.hpp"

// Default constructor
Data::Data() : value(0) {}

// Parameterized constructor
Data::Data(int value) : value(value) {}

// Copy constructor
Data::Data(const Data& other) : value(other.value) {}

// Assignment operator
Data& Data::operator=(const Data& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

// Destructor
Data::~Data() {}

int Data::getValue() const {
    return value;
}
