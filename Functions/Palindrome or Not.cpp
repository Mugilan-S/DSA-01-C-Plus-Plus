#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Characters at start and end positions are different
        }
        start++;
        end--;
    }
    return true; // All characters matched, string is palindrome
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    if (isPalindrome(inputString)) {
        cout << "The string \"" << inputString << "\" is a palindrome." << endl;
    } else {
        cout << "The string \"" << inputString << "\" is not a palindrome." << endl;
    }

    return 0;
}

