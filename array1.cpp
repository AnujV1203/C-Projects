#include <iostream>

int sumOfPositiveEven(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    int arr[] = {2, 5, 8, -9, 10, 12, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sumOfPositiveEven(arr, size);

    std::cout << "The sum of positive even numbers in the array is: " << result << std::endl;

    return 0;
}
