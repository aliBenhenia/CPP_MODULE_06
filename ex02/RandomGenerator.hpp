#ifndef RANDOMGENERATOR_HPP
#define RANDOMGENERATOR_HPP

#include <cstdlib>
#include "Base.hpp"

class RandomGenerator {
public:
    static int generateRandomNumber(int min, int max);
    static Base* generate();  // Declare the generate function
};

#endif
