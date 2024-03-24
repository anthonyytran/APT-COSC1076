#include <iostream>

// Function to read a character from standard input
bool getCharacter(char *c)
{
    std::cin.get(*c); // Read a single character
    return true;      // Return true indicating successful read
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
        std::cout << "Failed to read a character." << std::endl;
    }

    return 0;
}