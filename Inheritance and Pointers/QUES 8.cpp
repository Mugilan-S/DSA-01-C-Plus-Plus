#include <iostream>

int main() {
    
    char* ptrToChar;

    char letter = 'A';

    ptrToChar = &letter;

    std::cout << "Value of char using pointer: " << *ptrToChar << std::endl;

    return 0;
}

