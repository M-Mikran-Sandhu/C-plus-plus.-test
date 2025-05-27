#include <iostream>
#include <string> // Required for std::string

int main() {
    int age;
    std::string name;

    // Output using std::cout
    std::cout << "Enter your name: ";
    // Input using std::cin
    std::getline(std::cin, name); // Use getline to read the whole line, including spaces

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}
