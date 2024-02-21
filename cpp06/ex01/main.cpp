#include "Serializer.hpp"

int main()
{
    Data* originPtr = new Data(10);

    uintptr_t serializedPtr = Serializer::serialize(originPtr);

    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    if(originPtr == deserializedPtr)
        std::cout<< GREEN <<"Succesful serializing!"<< RESET <<std::endl;
    else
        std::cout<< RED <<"Unsuccesful serializing!"<< RESET <<std::endl;

    delete originPtr;
}