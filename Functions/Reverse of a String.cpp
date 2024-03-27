#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string
string reverseString(const string& str) {
    string reversedStr = str;
    int length = str.length();
    for (int i = 0; i < length / 2; ++i) {
        char temp = reversedStr[i];
        reversedStr[i] = reversedStr[length - 1 - i];
        reversedStr[length - 1 - i] = temp;
    }
    return reversedStr;
}

int main() {
    string inputString, reversedString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    reversedString = reverseString(inputString);

    cout << "Original string: " << inputString << endl;
    cout << "Reversed string: " << reversedString << endl;

    return 0;
}

