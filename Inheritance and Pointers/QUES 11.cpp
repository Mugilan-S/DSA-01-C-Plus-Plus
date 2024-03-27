#include <iostream>

int main() {
   
    int numbers[] = {10, 20, 30, 40, 50};

    int* ptrToArray = numbers;

    std::cout << "Values of array using pointer:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << *(ptrToArray + i) << std::endl;
    }

    return 0;
}

