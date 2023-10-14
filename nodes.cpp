#include <iostream>

// Define the Node structure
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Define the LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Insert a new node at the end of the list
    void append(int val) {
        Node* newNode = new Node(val);

        if (!head) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }

        current->next = newNode;
    }

    // Count the number of nodes in the linked list using recursion
    int countNodesRecursively(Node* current) {
        if (!current) {
            return 0;
        } else {
            return 1 + countNodesRecursively(current->next);
        }
    }

    // Public method to count nodes using recursion
    int countNodes() {
        return countNodesRecursively(head);
    }
};

int main() {
    LinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);

    std::cout << "Number of nodes in the linked list: " << list.countNodes() << std::endl;

    return 0;
}
