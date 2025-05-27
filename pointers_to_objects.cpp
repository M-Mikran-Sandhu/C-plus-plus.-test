#include <iostream>
#include <string>
#include <vector> // Not strictly needed for array of MyClass*, but good for general C++

class MyClass {
private:
    std::string name_;

public:
    // Public constructor
    MyClass(std::string name) : name_(name) {
        std::cout << "Constructor: " << name_ << std::endl;
    }

    // Public destructor
    ~MyClass() {
        std::cout << "Destructor: " << name_ << std::endl;
    }

    // Public member function
    void printMessage() {
        std::cout << "Message from " << name_ << std::endl;
    }
};

int main() {
    // Stack-allocated object
    std::cout << "--- Stack Object ---" << std::endl;
    MyClass obj_stack("StackObj");
    obj_stack.printMessage();
    std::cout << "--- End Stack Object ---" << std::endl;

    std::cout << "\n--- Heap Object (single) ---" << std::endl;
    // Heap-allocated object (single pointer)
    MyClass* ptr_heap = new MyClass("HeapObj");
    ptr_heap->printMessage();
    delete ptr_heap;
    ptr_heap = nullptr; // Good practice
    std::cout << "--- End Heap Object (single) ---" << std::endl;

    std::cout << "\n--- Array of Heap Objects ---" << std::endl;
    // Array of MyClass pointers
    const int ARRAY_SIZE = 3;
    MyClass* ptr_array[ARRAY_SIZE];

    // Loop to dynamically create MyClass objects and assign to array elements
    std::cout << "Creating objects in array:" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::string obj_name = "ArrayObj" + std::to_string(i);
        ptr_array[i] = new MyClass(obj_name);
    }

    // Loop to call printMessage() for each object in the array
    std::cout << "\nCalling messages from array objects:" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        ptr_array[i]->printMessage();
    }

    // Loop to delete each object in the array
    std::cout << "\nDeleting objects in array:" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        delete ptr_array[i];
        ptr_array[i] = nullptr; // Good practice
    }
    std::cout << "--- End Array of Heap Objects ---" << std::endl;
    
    std::cout << "\nEnd of main." << std::endl;
    return 0;
}
