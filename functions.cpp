#include <iostream>

// Function declaration (prototype)
int add(int a, int b);

int main() {
    int num1 = 10, num2 = 5;
    int sum;

    // Function call
    sum = add(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
