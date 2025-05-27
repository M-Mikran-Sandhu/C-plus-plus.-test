#include <iostream>

// Define a Node struct for Doubly Linked List
struct Node {
    int data;
    Node* next;
    Node* prev;

    // Constructor for Node
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

// Function to add a new node to the end of the list
void appendNode(Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);
    Node* last = *head_ref; // Used to traverse to the last node

    // If the list is empty, make the new node the head
    if (*head_ref == nullptr) {
        *head_ref = new_node;
        return;
    }

    // Traverse to the last node
    while (last->next != nullptr) {
        last = last->next;
    }

    // Link the new node
    last->next = new_node;
    new_node->prev = last;
}

// Function to print the list elements from head to tail
void printListForward(Node* node) {
    std::cout << "List (Forward): Head -> ";
    while (node != nullptr) {
        std::cout << node->data << " <-> ";
        node = node->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Function to print the list elements from tail to head
void printListBackward(Node* head) {
    if (head == nullptr) {
        std::cout << "List (Backward): nullptr" << std::endl;
        return;
    }
    // Traverse to the tail of the list
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    std::cout << "List (Backward): Tail -> ";
    while (tail != nullptr) {
        std::cout << tail->data << " <-> ";
        tail = tail->prev;
    }
    std::cout << "nullptr (Head)" << std::endl;
}

// Function to clean up the list (delete all nodes)
void cleanup(Node** head_ref) {
    Node* current = *head_ref;
    Node* next_node = nullptr;
    while (current != nullptr) {
        next_node = current->next;
        delete current;
        current = next_node;
    }
    *head_ref = nullptr;
    std::cout << "List cleaned up." << std::endl;
}

int main() {
    // Initialize an empty list
    Node* head = nullptr;

    // Append a few nodes
    appendNode(&head, 1);
    appendNode(&head, 2);
    appendNode(&head, 3);

    // Print the list forward
    printListForward(head);

    // Print the list backward
    printListBackward(head);

    // Clean up the list
    cleanup(&head);
    printListForward(head); // Should show an empty list

    return 0;
}
