#include <iostream>
using namespace std;

// Function to find the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int result = gcd(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

