#include <iostream>

// Define a Node struct
struct Node {
    int data;
    Node* next;

    // Constructor for Node
    Node(int val) : data(val), next(nullptr) {}
};

// Function to add a new node to the front of the list
void prependNode(Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data); // Create a new node
    new_node->next = *head_ref;      // Link the new node to the current head
    *head_ref = new_node;            // Make the new node the new head
}

// Function to print the list elements
void printList(Node* node) {
    std::cout << "Linked List: ";
    while (node != nullptr) {
        std::cout << node->data << " -> ";
        node = node->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Function to clean up the list (delete all nodes)
void deleteList(Node** head_ref) {
    Node* current = *head_ref;
    Node* next_node = nullptr;
    while (current != nullptr) {
        next_node = current->next; // Store the next node
        delete current;            // Delete the current node
        current = next_node;       // Move to the next node
    }
    *head_ref = nullptr; // Set head to nullptr after deleting all nodes
}

int main() {
    // Initialize an empty linked list
    Node* head = nullptr;

    // Prepend a few nodes
    prependNode(&head, 10);
    prependNode(&head, 7);
    prependNode(&head, 3);

    // Print the list
    printList(head);

    // Clean up the list
    std::cout << "Deleting the list..." << std::endl;
    deleteList(&head);
    printList(head); // Should show an empty list

    return 0;
}
