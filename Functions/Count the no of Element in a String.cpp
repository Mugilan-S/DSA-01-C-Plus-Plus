#include <iostream>
#include <string>
using namespace std;

// Function to count the number of elements in a string
int countElements(const string& str) {
    return str.length(); // Length of string gives the number of elements
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    int count = countElements(inputString);

    cout << "Number of elements in the string: " << count << endl;

    return 0;
}

