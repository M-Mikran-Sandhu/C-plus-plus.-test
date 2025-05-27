#include <iostream>

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    std::cout << "Array Elements:" << std::endl;

    // Access and print array elements
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << numbers[i] << std::endl;
    }

    // Modify an array element
    numbers[2] = 35;
    std::cout << "After modification, Element 2: " << numbers[2] << std::endl;

    return 0;
}
