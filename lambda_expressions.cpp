#include <iostream>
#include <vector>
#include <algorithm> // Required for std::for_each and std::sort
#include <string>    // For sorting strings example

// A simple struct for sorting example
struct Item {
    std::string name;
    int value;
};

int main() {
    // Example 1: Printing each number doubled using std::for_each and a lambda
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
    std::cout << "Numbers doubled: ";
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n * 2 << " ";
    });
    std::cout << std::endl;

    // Example 2: Lambda capturing a variable by value
    int factor = 3;
    std::cout << "Numbers multiplied by " << factor << ": ";
    std::for_each(numbers.begin(), numbers.end(), [factor](int n) {
        std::cout << n * factor << " ";
    });
    std::cout << std::endl;

    // Example 3: Sorting numbers in descending order using std::sort and a lambda
    std::vector<int> sort_numbers = {5, 2, 8, 1, 9, 4};
    std::cout << "Original numbers for sorting: ";
    for (int n : sort_numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::sort(sort_numbers.begin(), sort_numbers.end(), [](int a, int b) {
        return a > b; // Sort in descending order
    });

    std::cout << "Numbers sorted in descending order: ";
    for (int n : sort_numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Example 4: Sorting a vector of custom objects (struct Item) by value
    std::vector<Item> items = {{"apple", 10}, {"banana", 5}, {"cherry", 15}};
    std::cout << "\nOriginal items: ";
    for(const auto& item : items) {
        std::cout << "{" << item.name << ", " << item.value << "} ";
    }
    std::cout << std::endl;

    std::sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
        return a.value < b.value; // Sort by value in ascending order
    });
    
    std::cout << "Items sorted by value: ";
    for(const auto& item : items) {
        std::cout << "{" << item.name << ", " << item.value << "} ";
    }
    std::cout << std::endl;

    return 0;
}
