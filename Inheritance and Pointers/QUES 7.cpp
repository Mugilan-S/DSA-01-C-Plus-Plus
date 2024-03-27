#include <iostream>

int main() {
   
    float* ptrToFloat;

    float num = 3.14f;

    ptrToFloat = &num;

    std::cout << "Value of float using pointer: " << *ptrToFloat << std::endl;

    return 0;
}

