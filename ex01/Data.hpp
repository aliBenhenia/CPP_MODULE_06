#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
public:
    // Default constructor
    Data();

    // Parameterized constructor
    Data(int value);

    // Copy constructor
    Data(const Data& other);

    // Assignment operator
    Data& operator=(const Data& other);

    // Destructor
    ~Data();

    int getValue() const;

private:
    int value;
};

#endif
