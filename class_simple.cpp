#include <iostream>

// Define a class named Rectangle
class Rectangle {
private:
    int width;
    int height;

public:
    // Constructor to initialize width and height
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Public member function to get the area
    int getArea() {
        return width * height;
    }
};

int main() {
    // Create an instance of Rectangle
    Rectangle rect(10, 5);

    // Print its area
    std::cout << "Rectangle Area: " << rect.getArea() << std::endl;

    return 0;
}
