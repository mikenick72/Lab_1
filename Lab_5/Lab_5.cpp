#include <iostream>
#include <vector>
#include <string>

// Function to encode a single character using the provided cipher
char encodeChar(char inputChar, const std::vector<char>& cipher) {
    if (inputChar >= 'A' && inputChar <= 'Z') {
        return cipher[inputChar - 'A'];
    }
    else if (inputChar >= 'a' && inputChar <= 'z') {
        char upperCaseLetter = inputChar - 32; // Convert to uppercase ASCII
        char encodedChar = cipher[upperCaseLetter - 'A'];
        return encodedChar + 32; // Convert back to lowercase ASCII
    }
    else {
        return inputChar; // Non-letter characters are returned as-is
    }
}

int main() {
    // Cipher vector as given in the lab document
    std::vector<char> cipher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    std::string inputText;
    std::cout << "Enter text to encode: ";
    getline(std::cin, inputText); // Get input from user, including spaces

    std::string encodedText = "";
    for (char c : inputText) {
        encodedText += encodeChar(c, cipher); // Encode each character
    }

    std::cout << "Encoded text: " << encodedText << std::endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
