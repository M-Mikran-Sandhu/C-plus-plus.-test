#include <iostream>
#include <string> // Required for std::string

int main() {
    // Integer data type
    int age = 25;
    std::cout << "Age (int): " << age << std::endl;

    // Floating-point data type
    float temperature = 98.6f; // Use 'f' suffix for float literals
    std::cout << "Temperature (float): " << temperature << std::endl;

    // Double-precision floating-point data type
    double pi = 3.1415926535;
    std::cout << "Pi (double): " << pi << std::endl;

    // Character data type
    char grade = 'A';
    std::cout << "Grade (char): " << grade << std::endl;

    // Boolean data type
    bool isStudent = true;
    std::cout << "Is student? (bool): " << (isStudent ? "true" : "false") << std::endl;

    // String data type
    std::string name = "John Doe";
    std::cout << "Name (string): " << name << std::endl;
    
    // Constant variable
    const int MAX_SCORE = 100;
    std::cout << "Max Score (const int): " << MAX_SCORE << std::endl;
    // MAX_SCORE = 101; // This would cause a compile error

    return 0;
}
