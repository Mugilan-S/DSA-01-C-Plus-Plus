#include <iostream>

void sayHello() {
    std::cout << "Hello, world!" << std::endl;
}

int main() {
   
    void (*ptrToFunction)();

    ptrToFunction = sayHello;

    (*ptrToFunction)();

    return 0;
}

