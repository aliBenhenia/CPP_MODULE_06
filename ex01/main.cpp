#include "Data.hpp"
#include "Serializer.hpp"

int main() {
    // Create a Data object
    Data dataObject(42);

    // Serialize the address of the Data object
    uintptr_t serialized = Serializer::serialize(&dataObject);

    // Deserialize the serialized value back to a pointer
    Data* deserialized = Serializer::deserialize(serialized);

    // Check if the deserialized pointer is equal to the original pointer
    if (deserialized == &dataObject) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Original value: " << dataObject.getValue() << std::endl;
        std::cout << "Deserialized value: " << deserialized->getValue() << std::endl;
    } else {
        std::cerr << "Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}
