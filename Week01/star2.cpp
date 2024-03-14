#include <iostream>

int main()
{
    // Outer loop for rows
    for (int row = 1; row <= 6; ++row)
    {
        // Print spaces
        for (int space = 1; space <= 6 - row; ++space)
        {
            std::cout << " ";
        }
        // Print stars
        for (int star = 1; star <= row; ++star)
        {
            std::cout << "*";
        }
        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}
