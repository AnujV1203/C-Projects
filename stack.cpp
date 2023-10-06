#include <iostream>
#include <queue>

class Stack {
private:
    std::queue<int> q1;
    std::queue<int> q2;

public:
    // Function to push an element onto the stack
    void push(int x) {
        // Push the element onto q1
        q1.push(x);
    }

    // Function to pop the top element from the stack
    void pop() {
        // Move all elements from q1 to q2 except the last one
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        // Pop the last element from q1 (which is the top element of the stack)
        q1.pop();

        // Swap q1 and q2, making q2 empty for the next push/pop operations
        std::swap(q1, q2);
    }

    // Function to get the top element of the stack
    int top() {
        // Move all elements from q1 to q2 except the last one
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        // Get the last element from q1 (which is the top element of the stack)
        int topElement = q1.front();

        // Move it to q2
        q2.push(topElement);

        // Swap q1 and q2, making q2 empty for the next push/pop operations
        std::swap(q1, q2);

        return topElement;
    }

    // Function to check if the stack is empty
    bool empty() {
        return q1.empty() && q2.empty();
    }
};

int main() {
    Stack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    std::cout << "Top element: " << myStack.top() << std::endl; // Output: 3

    myStack.pop();
    std::cout << "Top element after pop: " << myStack.top() << std::endl; // Output: 2

    std::cout << "Is the stack empty? " << (myStack.empty() ? "Yes" : "No") << std::endl; // Output: No

    return 0;
}
