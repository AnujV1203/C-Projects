#include <iostream>

// Define a structure for a singly linked list node
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to delete a specified node from a linked list
void deleteNode(Node* head, int key) {
    // Handle the case where the head node needs to be deleted
    if (head != nullptr && head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Search for the node with the specified key
    Node* current = head;
    Node* prev = nullptr;
    while (current != nullptr && current->data != key) {
        prev = current;
        current = current->next;
    }

    // If the key is not found, return
    if (current == nullptr) {
        std::cout << "Node with key " << key << " not found in the linked list." << std::endl;
        return;
    }

    // Adjust the pointers to remove the node
    prev->next = current->next;
    delete current;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    // Delete a node with a specific key (e.g., 3)
    int keyToDelete = 3;
    deleteNode(head, keyToDelete);

    std::cout << "Linked List after deleting node with key " << keyToDelete << ": ";
    printLinkedList(head);

    // Clean up memory (free the nodes)
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
