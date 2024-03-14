#include <iostream>

int main()
{
    int rows = 13;

    // Upper half of the diamond
    for (int row = 1; row <= rows / 2 + 1; ++row)
    {
        // Print spaces
        for (int space = 1; space <= rows / 2 + 1 - row; ++space)
        {
            std::cout << " ";
        }
        // Print stars
        for (int star = 1; star <= 2 * row - 1; ++star)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Lower half of the diamond
    for (int row = rows / 2; row >= 1; --row)
    {
        // Print spaces
        for (int space = 1; space <= rows / 2 + 1 - row; ++space)
        {
            std::cout << " ";
        }
        // Print stars
        for (int star = 1; star <= 2 * row - 1; ++star)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}