//You are given an array of integers. Write a C++ function to find the second-largest element in the array.
#include <iostream>
#include <vector>

int findSecondLargest(const std::vector<int>& arr) {
    if (arr.size() < 2) {
        std::cerr << "Array does not have at least two elements." << std::endl;
        return -1; // Return a sentinel value or handle the error appropriately
    }

    int firstMax = std::max(arr[0], arr[1]);
    int secondMax = std::min(arr[0], arr[1]);

    for (size_t i = 2; i < arr.size(); ++i) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] < firstMax) {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main() {
    std::vector<int> arr = {12, 45, 7, 23, 56, 89, 34};
    
    int secondLargest = findSecondLargest(arr);
    
    if (secondLargest != -1) {
        std::cout << "The second-largest element in the array is: " << secondLargest << std::endl;
    }

    return 0;
}
