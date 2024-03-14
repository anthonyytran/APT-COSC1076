#include <iostream>

int main()
{
    // Loop through each row
    for (int row = 1; row <= 6; ++row)
    {
        // Print spaces
        for (int space = 1; space <= 6 - row; ++space)
        {
            std::cout << " "; // Print space
        }

        // Print asterisks
        for (int star = 1; star <= (2 * row - 1); ++star)
        {
            std::cout << "*"; // Print asterisk
        }

        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
    return 0;
    return 0;
}
