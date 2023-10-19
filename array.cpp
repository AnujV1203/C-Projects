#include <iostream>

int findMax(int arr[], int size) {
    // Initialize the maximum value as the first element of the array.
    int maxElement = arr[0];

    // Iterate through the array to find the maximum element.
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    int arr[] = {3, 7, 1, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMax(arr, size);

    std::cout << "The maximum element in the array is: " << maxElement << std::endl;

    return 0;
}
