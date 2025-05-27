#include <iostream>
#include <vector>
#include <string>

int main() {
    // Create std::vector<std::string> words
    std::vector<std::string> words = {"hello", "world", "from", "c++"};

    // Use a range-based for loop to print each word
    std::cout << "Words in the vector:" << std::endl;
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    // Declare variables using auto for type deduction
    auto num = 42;
    auto text = "example text"; // C-style string literal, type will be const char*
    auto pi_approx = 3.14159;

    std::cout << "\nAuto type deduction examples:" << std::endl;
    std::cout << "num (deduced as int): " << num << std::endl;
    std::cout << "text (deduced as const char*): " << text << std::endl;
    std::cout << "pi_approx (deduced as double): " << pi_approx << std::endl;
    
    // Show auto with an iterator
    std::cout << "\nAuto with iterator:" << std::endl;
    auto it = words.begin(); // it will be of type std::vector<std::string>::iterator
    
    if (it != words.end()) {
        std::cout << "First word using iterator: " << *it << std::endl;
        // Let's increment the iterator to show another element
        ++it;
        if (it != words.end()) {
            std::cout << "Second word using iterator: " << *it << std::endl;
        }
    }

    return 0;
}
