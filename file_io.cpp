#include <iostream>
#include <fstream> // Required for file I/O
#include <string>   // Required for std::string

int main() {
    const std::string filename = "sample_output.txt";

    // Writing to a file
    std::ofstream outfile;
    outfile.open(filename); // Or std::ofstream outfile(filename);

    if (!outfile.is_open()) {
        std::cerr << "Error: Could not open the file " << filename << " for writing." << std::endl;
        return 1; // Indicate an error
    }

    outfile << "Hello from C++ File I/O!" << std::endl;
    outfile << "This is the second line." << std::endl;
    outfile << "Writing numbers: " << 12345 << std::endl;

    outfile.close();
    std::cout << "Successfully wrote to " << filename << std::endl;

    // Reading from a file
    std::ifstream infile;
    infile.open(filename); // Or std::ifstream infile(filename);

    if (!infile.is_open()) {
        std::cerr << "Error: Could not open the file " << filename << " for reading." << std::endl;
        return 1; // Indicate an error
    }

    std::cout << "\nReading from " << filename << ":" << std::endl;
    std::string line;
    while (std::getline(infile, line)) {
        std::cout << line << std::endl;
    }

    infile.close();

    return 0; // Indicate success
}
