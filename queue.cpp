#include <iostream>
#include <vector>

class MinHeap {
private:
    std::vector<int> heap;

    // Helper function to maintain the min-heap property
    void heapifyUp(int index) {
        int parentIndex = (index - 1) / 2;
        while (index > 0 && heap[index] < heap[parentIndex]) {
            std::swap(heap[index], heap[parentIndex]);
            index = parentIndex;
            parentIndex = (index - 1) / 2;
        }
    }

    // Helper function to maintain the min-heap property after extracting the minimum element
    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int smallest = index;

        if (leftChild < heap.size() && heap[leftChild] < heap[index]) {
            smallest = leftChild;
        }

        if (rightChild < heap.size() && heap[rightChild] < heap[smallest]) {
            smallest = rightChild;
        }

        if (smallest != index) {
            std::swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:
    // Function to insert an element into the min-heap
    void insert(int val) {
        heap.push_back(val);
        int lastIndex = heap.size() - 1;
        heapifyUp(lastIndex);
    }

    // Function to extract the minimum element from the min-heap
    int extractMin() {
        if (heap.empty()) {
            throw std::out_of_range("Heap is empty");
        }

        int minValue = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);

        return minValue;
    }
};

int main() {
    MinHeap minHeap;

    minHeap.insert(5);
    minHeap.insert(10);
    minHeap.insert(2);
    minHeap.insert(8);

    std::cout << "Minimum element: " << minHeap.extractMin() << std::endl; // Output: 2

    minHeap.insert(1);
    std::cout << "Minimum element: " << minHeap.extractMin() << std::endl; // Output: 1

    return 0;
}
