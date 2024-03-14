#include <iostream>

#define PI 3.14159

// Function that calculates the area of a circle
double calculateArea(double radius)
{
    return PI * radius * radius;
}

int main()
{
    double radius;

    // Prompt user to enter the radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate area of circle using the function
    double area = calculateArea(radius);

    // Print out the area of the circle
    std::cout << "The area of the circle with radius " << radius << " is " << area << std::endl;

    return 0;
}