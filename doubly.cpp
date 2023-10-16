#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Add a node to the end of the list
    void append(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Delete a node with a given value
    void deleteNode(int val) {
        Node* current = head;
        while (current) {
            if (current->data == val) {
                if (current->prev) {
                    current->prev->next = current->next;
                } else {
                    head = current->next;
                }
                if (current->next) {
                    current->next->prev = current->prev;
                } else {
                    tail = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
        }
    }

    // Display the list in forward direction
    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Display the list in reverse direction
    void displayReverse() {
        Node* current = tail;
        while (current) {
            std::cout << current->data << " ";
            current = current->prev;
        }
        std::cout << std::endl;
    }

    ~DoublyLinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    DoublyLinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    std::cout << "Doubly Linked List (Forward): ";
    list.display();

    std::cout << "Doubly Linked List (Reverse): ";
    list.displayReverse();

    list.deleteNode(3);

    std::cout << "Doubly Linked List after deleting 3: ";
    list.display();

    return 0;
}
