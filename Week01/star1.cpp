#include <iostream>

int main()
{
    // Outer loop to iterate over rows
    for (int i = 1; i <= 6; ++i)
    {
        // Inner loop to print '*' characters based on the current row number
        for (int j = 1; j <= i; ++j)
        {
            std::cout << "*"; // Print '*' character
        }
        std::cout << std::endl; // Move to the next line after printing '*' characters for the current row
    }
    return 0;
}