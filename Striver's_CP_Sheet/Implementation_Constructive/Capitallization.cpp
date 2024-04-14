#include <iostream>
#include <cctype> // Include the <cctype> header for toupper function
#include <string>

std::string capitalizeFirstLetter(std::string word) {
    if (!word.empty()) { // Check if the word is not empty
        word[0] = std::toupper(word[0]); // Capitalize the first letter
    }
    return word;
}

int main() {
    std::string word;
    std::cin >> word; // Input the word
    std::string capitalizedWord = capitalizeFirstLetter(word); // Capitalize the first letter
    std::cout << capitalizedWord << std::endl; // Output the capitalized word
    return 0;
}
