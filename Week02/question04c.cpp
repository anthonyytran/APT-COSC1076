#include <iostream>
#include <string>

bool getCharacter(char &c)
{
    int ch = std::cin.get();
    if (ch == EOF || ch == '\n')
    {
        return false; // No character read
    }
    else
    {
        c = static_cast<char>(ch);
        return true; // Character successfully read
    }
}

// Function to recursively print the reverse of the string
void printReverse(const std::string &str, int index)
{
    if (index >= 0)
    {
        std::cout << str[index];      // Print character at current index
        printReverse(str, index - 1); // Recur with next index
    }
}

int main()
{
    // Reading up to 100 characters into a string
    std::cout << "Enter up to 100 characters: ";
    std::string characters;
    char c;
    for (int i = 0; i < 100 && getCharacter(c); ++i)
    {
        characters += c;
    }

    // Printing the string
    std::cout << "String read: " << characters << std::endl;

    // Printing the reverse of the string using recursion
    std::cout << "Reverse String read: ";
    printReverse(characters, characters.length() - 1);
    std::cout << std::endl;

    return 0;
}