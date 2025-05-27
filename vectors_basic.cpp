#include <iostream>
#include <vector> // Required for std::vector

int main() {
    // Create an std::vector of integers
    std::vector<int> numbers;

    // Add a few elements to the vector using push_back()
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    // Access and print elements using array-like indexing ([])
    std::cout << "Accessing elements using []:" << std::endl;
    std::cout << "Element 0: " << numbers[0] << std::endl;
    std::cout << "Element 1: " << numbers[1] << std::endl;
    std::cout << "Element 2: " << numbers[2] << std::endl;
    std::cout << "Element 3: " << numbers[3] << std::endl;

    // Print the size of the vector using size()
    std::cout << "\nSize of the vector: " << numbers.size() << std::endl;

    // Iterate through the vector using a range-based for loop and print elements
    std::cout << "\nIterating using a range-based for loop:" << std::endl;
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    
    // Iterate through the vector using an iterator
    std::cout << "\nIterating using an iterator:" << std::endl;
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
