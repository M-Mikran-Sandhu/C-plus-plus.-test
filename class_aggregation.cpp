#include <iostream>
#include <string>
#include <vector>
#include <memory> // Required for std::shared_ptr and std::make_shared

// Professor class
class Professor {
private:
    std::string name_;

public:
    // Constructor to initialize name_
    Professor(const std::string& name) : name_(name) {
        std::cout << "Professor " << name_ << " hired." << std::endl;
    }

    // Public member function to get the name
    std::string getName() const { // Added const
        return name_;
    }

    ~Professor() {
        std::cout << "Professor " << name_ << " is no longer with us." << std::endl;
    }
};

// Department class
class Department {
private:
    std::string name_;
    std::vector<std::shared_ptr<Professor>> professors_; // Holds shared_ptrs to Professors

public:
    // Constructor to initialize name_
    Department(const std::string& name) : name_(name) {
        std::cout << "Department of " << name_ << " established." << std::endl;
    }

    // Public member function to get the name
    std::string getName() const { // Added const
        return name_;
    }

    // Public member function to add a professor
    void addProfessor(std::shared_ptr<Professor> prof) {
        professors_.push_back(prof);
        std::cout << "Professor " << prof->getName() << " added to the " << name_ << " department." << std::endl;
    }

    // Public member function to list professors
    void listProfessors() const { // Added const
        std::cout << "\nProfessors in the " << name_ << " department:" << std::endl;
        if (professors_.empty()) {
            std::cout << "  (No professors listed)" << std::endl;
            return;
        }
        for (const auto& prof : professors_) {
            std::cout << "  - " << prof->getName() << std::endl;
        }
    }
    ~Department() {
        std::cout << "Department of " << name_ << " is disbanded. Professors associated:" << std::endl;
        for (const auto& prof : professors_) {
            std::cout << "  - " << prof->getName() << " (use_count: " << prof.use_count() << ")" << std::endl;
        }
    }
};

int main() {
    std::cout << "--- Creating Professors ---" << std::endl;
    auto prof1 = std::make_shared<Professor>("Dr. Smith");
    auto prof2 = std::make_shared<Professor>("Dr. Jones");
    auto prof3 = std::make_shared<Professor>("Dr. Brown");

    std::cout << "\n--- Creating Departments and Adding Professors ---" << std::endl;
    auto cs_dept = std::make_shared<Department>("Computer Science");
    cs_dept->addProfessor(prof1);
    cs_dept->addProfessor(prof2);

    auto math_dept = std::make_shared<Department>("Mathematics");
    math_dept->addProfessor(prof1); // Dr. Smith is also in Mathematics
    math_dept->addProfessor(prof3);

    cs_dept->listProfessors();
    math_dept->listProfessors();

    std::cout << "\n--- Checking Professor Smith's shared ownership ---" << std::endl;
    std::cout << "Dr. Smith use_count: " << prof1.use_count() << " (shared by cs_dept, math_dept, and main's prof1)" << std::endl;

    std::cout << "\n--- Disbanding Computer Science Department ---" << std::endl;
    cs_dept.reset(); // Release cs_dept's ownership

    std::cout << "\n--- Checking Professor Smith's shared ownership after CS disbandment ---" << std::endl;
    std::cout << "Dr. Smith use_count: " << prof1.use_count() << " (shared by math_dept and main's prof1)" << std::endl;
    if (prof1) { // Check if prof1 is still valid
        std::cout << "Dr. Smith still exists and is affiliated with: " << prof1->getName() << std::endl;
    }
    
    math_dept->listProfessors(); // Dr. Smith should still be listed in Mathematics

    std::cout << "\n--- End of main ---" << std::endl;
    // prof1, prof2, prof3, math_dept will go out of scope here,
    // and their destructors will be called, releasing ownership.
    // Professors' destructors will be called when their use_count reaches 0.
    return 0;
}
