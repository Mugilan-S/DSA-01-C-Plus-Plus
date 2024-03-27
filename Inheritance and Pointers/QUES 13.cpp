#include <iostream>

int main() {
   
    float numbers[] = {3.14f, 2.71f, 1.618f, 0.577f, 2.718f};

    float* ptrToFloatArray = numbers;

    std::cout << "Values of array using pointer:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << *(ptrToFloatArray + i) << std::endl;
    }

    return 0;
}

