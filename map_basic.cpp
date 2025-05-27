#include <iostream>
#include <map>
#include <string>

int main() {
    // Create std::map<std::string, int> student_scores;
    std::map<std::string, int> student_scores;

    // Insert pairs
    student_scores["Alice"] = 95;
    student_scores["Bob"] = 82;
    student_scores["Charlie"] = 91;

    // Access and print Bob's score
    std::cout << "Bob's score: " << student_scores["Bob"] << std::endl;

    // Iterate through the map using a range-based for loop
    std::cout << "\nAll student scores:" << std::endl;
    for (auto const& [name, score] : student_scores) { // C++17 structured binding
        std::cout << name << ": " << score << std::endl;
    }
    /*
    // Alternative for older C++ versions:
    for (auto const& pair : student_scores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    */

    // Check if a key "David" exists
    std::string search_name = "David";
    if (student_scores.count(search_name)) { // Or student_scores.find(search_name) != student_scores.end()
        std::cout << "\n" << search_name << "'s score is: " << student_scores[search_name] << std::endl;
    } else {
        std::cout << "\n" << search_name << " is not found in the map." << std::endl;
    }
    
    std::string search_name_bob = "Bob";
    if (student_scores.count(search_name_bob)) {
        std::cout << search_name_bob << "'s score is: " << student_scores[search_name_bob] << std::endl;
    } else {
        std::cout << search_name_bob << " is not found in the map." << std::endl;
    }


    return 0;
}
