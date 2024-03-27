#include <iostream>

int main() {
    
    char characters[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!'};

    char* ptrToCharArray = characters;

    std::cout << "Value of array using pointer: ";
    while (*ptrToCharArray != '\0') {
        std::cout << *ptrToCharArray;
        ptrToCharArray++;
    }
    std::cout << std::endl;

    return 0;
}

