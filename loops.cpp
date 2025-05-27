#include <iostream>

int main() {
    std::cout << "For Loop:" << std::endl;
    // For loop
    for (int i = 0; i < 5; ++i) {
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "\nWhile Loop:" << std::endl;
    // While loop
    int j = 0;
    while (j < 5) {
        std::cout << "j = " << j << std::endl;
        ++j;
    }

    std::cout << "\nDo-While Loop:" << std::endl;
    // Do-while loop
    int k = 0;
    do {
        std::cout << "k = " << k << std::endl;
        ++k;
    } while (k < 5);

    return 0;
}
