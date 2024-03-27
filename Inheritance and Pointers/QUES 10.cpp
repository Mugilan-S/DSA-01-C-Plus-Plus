#include <iostream>
#include <string>

int main() {
  
    std::string* ptrToString;

    std::string message = "Hello, world!";

    ptrToString = &message;

    std::cout << "Value of string using pointer: " << *ptrToString << std::endl;

    return 0;
}

