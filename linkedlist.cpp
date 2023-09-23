//Progarm to linked list
#include <iostream>

using namespace std;

// Define a Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; // Save the next node
        current->next = prev; // Reverse the pointer direction
        prev = current;
        current = next;
    }

    return prev; // The new head of the reversed list
}

int main() {
    Node* head = nullptr;

    // Insert elements at the beginning of the linked list
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 5);
    insertAtBeginning(head, 7);
    insertAtBeginning(head, 9);

    cout << "Original linked list: ";
    printList(head);

    // Reverse the linked list
    head = reverseList(head);

    cout << "Reversed linked list: ";
    printList(head);

    return 0;
}