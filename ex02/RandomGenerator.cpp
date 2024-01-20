#include "RandomGenerator.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int RandomGenerator::generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}
Base* RandomGenerator::generate() {
    int randomNum = generateRandomNumber(1, 3);
    switch (randomNum) {
        case 1:
            return new A();
        case 2:
            return new B();
        case 3:
            return new C();
        default:
            return nullptr;
    }
}