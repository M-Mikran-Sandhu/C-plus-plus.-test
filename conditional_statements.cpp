#include <iostream>

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "You entered a positive integer." << std::endl;
    } else if (number < 0) {
        std::cout << "You entered a negative integer." << std::endl;
    } else {
        std::cout << "You entered zero." << std::endl;
    }

    int score = 85;
    char grade;

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    std::cout << "Your grade is: " << grade << std::endl;

    return 0;
}
