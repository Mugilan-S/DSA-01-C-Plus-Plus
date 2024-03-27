#include <iostream>

int main() {
   
    double* ptrToDouble;

    double number = 3.14159;

    ptrToDouble = &number;

    std::cout << "Value of double using pointer: " << *ptrToDouble << std::endl;

    return 0;
}

