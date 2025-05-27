#include <iostream>
#include <string>

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() const {
        std::cout << "Animal sound" << std::endl;
    }

    // Virtual destructor (good practice when dealing with polymorphism and dynamic memory)
    virtual ~Animal() {
        std::cout << "Animal destructor called." << std::endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof!" << std::endl;
    }

    ~Dog() override {
        std::cout << "Dog destructor called." << std::endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Meow!" << std::endl;
    }

    ~Cat() override {
        std::cout << "Cat destructor called." << std::endl;
    }
};

int main() {
    Animal* animal1;
    Animal* animal2;

    // Assign a Dog object to animal1
    animal1 = new Dog();
    // Assign a Cat object to animal2
    animal2 = new Cat();

    std::cout << "Calling makeSound() on animal1 (Dog): ";
    animal1->makeSound(); 

    std::cout << "Calling makeSound() on animal2 (Cat): ";
    animal2->makeSound(); 

    // Clean up dynamic memory
    delete animal1;
    animal1 = nullptr; // Good practice to nullify pointer after delete

    delete animal2;
    animal2 = nullptr; // Good practice

    return 0;
}
