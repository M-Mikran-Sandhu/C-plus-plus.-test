#include <iostream>

// Define a struct named Point
struct Point {
    int x;
    int y;
};

int main() {
    // Create an instance of Point
    Point p1;

    // Initialize its members
    p1.x = 10;
    p1.y = 20;

    // Print the values of the members
    std::cout << "Point Coordinates:" << std::endl;
    std::cout << "p1.x = " << p1.x << std::endl;
    std::cout << "p1.y = " << p1.y << std::endl;

    // Another way to initialize (C++11 and later)
    Point p2 = {30, 40};
    std::cout << "\nPoint p2 Coordinates:" << std::endl;
    std::cout << "p2.x = " << p2.x << std::endl;
    std::cout << "p2.y = " << p2.y << std::endl;
    
    return 0;
}
