#include <iostream>
#include <string>

// Base class
class Shape {
protected: // Changed to protected to allow derived class to access, or use public getter
    std::string name_;

public:
    Shape(const std::string& name) : name_(name) {
        std::cout << "Shape constructor called for: " << name_ << std::endl;
    }

    std::string getName() const {
        return name_;
    }
};

// Derived class
class Circle : public Shape {
private:
    double radius_;

public:
    Circle(double radius) : Shape("Circle"), radius_(radius) {
        std::cout << "Circle constructor called." << std::endl;
    }

    double getRadius() const {
        return radius_;
    }
};

int main() {
    // Create a Circle object
    Circle myCircle(5.0);

    // Print its name and radius
    std::cout << "Shape Name: " << myCircle.getName() << std::endl;
    std::cout << "Circle Radius: " << myCircle.getRadius() << " units" << std::endl;

    return 0;
}
