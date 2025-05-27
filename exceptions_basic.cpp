#include <iostream>
#include <stdexcept> // Required for std::exception and other standard exceptions
#include <string>    // Required for std::string and std::stoi

// Function that might throw an exception
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Division by zero error!");
    }
    return static_cast<double>(numerator) / denominator;
}

// Function that might throw an exception during string conversion
int stringToInt(const std::string& str) {
    try {
        return std::stoi(str);
    } catch (const std::invalid_argument& e) {
        throw std::invalid_argument("Invalid argument: Not a valid integer string. Original error: " + std::string(e.what()));
    } catch (const std::out_of_range& e) {
        throw std::out_of_range("Out of range: The number is too large or too small. Original error: " + std::string(e.what()));
    }
}

int main() {
    // Example 1: Division by zero
    std::cout << "--- Example 1: Division by Zero ---" << std::endl;
    try {
        double result = divide(10, 0);
        std::cout << "Result of division: " << result << std::endl; // This won't be reached
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- Example 2: Invalid string to integer conversion ---" << std::endl;
    std::string test_str1 = "12345";
    std::string test_str2 = "abc";
    std::string test_str3 = "99999999999999999999"; // Potentially out of range

    try {
        int num1 = stringToInt(test_str1);
        std::cout << "'" << test_str1 << "' converted to int: " << num1 << std::endl;

        int num2 = stringToInt(test_str2); // This will throw
        std::cout << "'" << test_str2 << "' converted to int: " << num2 << std::endl; 
    } catch (const std::exception& e) { // Catching base std::exception
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }
    
    std::cout << "\n--- Example 3: Out of range string to integer conversion ---" << std::endl;
    try {
        int num3 = stringToInt(test_str3); // This might throw std::out_of_range
        std::cout << "'" << test_str3 << "' converted to int: " << num3 << std::endl;
    } catch (const std::exception& e) { // Catching base std::exception
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }


    std::cout << "\nProgram continues after handling exceptions." << std::endl;
    return 0;
}
