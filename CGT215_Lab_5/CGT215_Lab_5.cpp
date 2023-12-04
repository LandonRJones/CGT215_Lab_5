#include <iostream>
#include <vector>
#include <string>

// Function to translate a character using the provided cypher
char translateChar(char inputChar, const std::vector<char>& cypher) {
    if (inputChar >= 'A' && inputChar <= 'Z') { // is a capital letter
        return cypher[inputChar - 'A'];
    }
    else if (inputChar >= 'a' && inputChar <= 'z') { // is a lowercase letter
        char upperCaseLetter = inputChar - 32; // convert to uppercase
        char upperCaseCode = cypher[upperCaseLetter - 'A']; // get uppercase code
        return upperCaseCode + 32; // convert code back to lowercase
    }
    else { // is not a letter
        return inputChar;
    }
}

int main() {
    // Define the cypher vector
    std::vector<char> cypher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    // Get input from the user
    std::string text;
    std::cout << "Input text to cypher: This is just a test: It's made up of special characters, *spaces*, and other weirdness...";
    std::cout << "Encoded Message:";
    std::getline(std::cin, text);

    // Translate and print the encoded string
    std::cout << "Encoded string: ";
    for (char c : text) {
        std::cout << translateChar(c, cypher);
    }

    std::cout << std::endl;

    return 0;
}