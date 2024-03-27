#include <iostream>

int main() {
   
    int* ptrToInt;

    int num = 10;

    ptrToInt = &num;

    std::cout << "Value of integer using pointer: " << *ptrToInt << std::endl;

    return 0;
}

