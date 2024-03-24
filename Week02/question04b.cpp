#include <iostream>

// Function to read a character from standard input
bool getCharacter(char *c)
{
    int input = std::cin.get(); // Read a single character
    if (input == EOF)
    {
        return false; // End-of-input reached
    }
    *c = static_cast<char>(input); // Place the read character into the pointer
    return true;                   // Return true indicating successful read
}

int main()
{
    char character;

    // Prompt the user to enter a character
    std::cout << "Enter a single character: ";

    // Call getCharacter function to read a character
    if (getCharacter(&character))
    {
        // Print the character
        std::cout << "You entered: " << character << std::endl;
    }
    else
    {
        std::cout << "End-of-input reached." << std::endl;
    }

    return 0;
}