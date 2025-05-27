#include <iostream>
#include <string>

// Engine class
class Engine {
private:
    int horsepower_;

public:
    // Constructor to initialize horsepower_
    Engine(int hp) : horsepower_(hp) {
        std::cout << "Engine created with " << horsepower_ << " hp" << std::endl;
    }

    // Public member function to start the engine
    void start() {
        std::cout << "Engine started" << std::endl;
    }

    // Public member function to get horsepower
    int getHorsepower() const { // Added const as it doesn't modify member variables
        return horsepower_;
    }
};

// Car class
class Car {
private:
    Engine engine_; // Engine object is a member of Car

public:
    // Constructor initializes engine_ using member initializer list
    Car(int hp) : engine_(hp) {
        std::cout << "Car created" << std::endl;
    }

    // Public member function to start the car
    void startCar() {
        engine_.start(); // Car delegates the start operation to its Engine
        std::cout << "Car is running" << std::endl;
    }

    // Public member function to display engine horsepower
    void displayEngineHp() const { // Added const
        std::cout << "Car engine horsepower: " << engine_.getHorsepower() << std::endl;
    }
};

int main() {
    // Create a Car object, which in turn creates an Engine object
    Car myCar(200);
    
    // Start the car
    myCar.startCar();
    
    // Display its engine's horsepower
    myCar.displayEngineHp();

    return 0;
}
