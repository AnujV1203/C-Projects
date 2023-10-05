#include <iostream>

// Define a structure for a BST node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a new node into the BST
Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }

    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    }

    return root;
}

// Function to find the height of a BST
int findHeight(Node* root) {
    if (root == nullptr) {
        return -1; // Height of an empty tree is -1
    }

    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);

    return std::max(leftHeight, rightHeight) + 1;
}

int main() {
    Node* root = nullptr;

    // Insert elements into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Find the height of the BST
    int height = findHeight(root);

    std::cout << "Height of the BST is: " << height << std::endl;

    // Clean up memory (free the nodes)
    // You can implement a function to delete the entire tree as needed.

    return 0;
}
