#include <iostream>

int main() {
    // Declare an integer variable and initialize it
    int number = 42;

    // Declare an integer pointer
    int *ptr;

    // Assign the address of the integer variable to the pointer
    ptr = &number;

    // Print the value of the integer variable
    std::cout << "Value of 'number': " << number << std::endl;

    // Print the value stored at the address the pointer is pointing to (dereferencing)
    std::cout << "Value pointed to by 'ptr' (*ptr): " << *ptr << std::endl;

    // Print the address stored in the pointer itself
    std::cout << "Address stored in 'ptr' (ptr): " << ptr << std::endl;
    
    // Print the address of 'number' directly for comparison
    std::cout << "Address of 'number' (&number): " << &number << std::endl;

    return 0;
}
