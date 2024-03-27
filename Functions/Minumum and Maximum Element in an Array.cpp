#include <iostream>
#include <climits>
using namespace std;

// Function to find the minimum and maximum elements in an array
void findMinMax(int arr[], int size, int& min, int& max) {
    if (size == 0) {
        min = max = INT_MIN;
        return;
    }

    min = max = arr[0]; // Initialize min and max with the first element

    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is larger
        }
    }
}

int main() {
    int arr[] = {5, 3, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minElement, maxElement;

    findMinMax(arr, size, minElement, maxElement);

    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Minimum element: " << minElement << endl;
    cout << "Maximum element: " << maxElement << endl;

    return 0;
}

