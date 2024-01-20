#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "IdentificationFunctions.hpp"
#include "RandomGenerator.hpp"
#include <iostream>
// Base* generate();
int main() {
    // Test for A, B, C classes
    std::cout << "Creating instances of A, B, and C:" << std::endl;

    Base* instanceA = new A();
    Base* instanceB = new B();
    Base* instanceC = new C();

    identify(instanceA);
    identify(instanceB);
    identify(instanceC);

    // Clean up
    delete instanceA;
    delete instanceB;
    delete instanceC;

    // Additional tests
    std::cout << "\nAdditional tests:" << std::endl;

    // Generate random instances and identify their types
    for (int i = 0; i < 5; ++i) {
        std::cout << "\nTest " << i + 1 << ":" << std::endl;
        Base* randomInstance = RandomGenerator::generate();
        identify(randomInstance);
        delete randomInstance;
    }

    return 0;
}
