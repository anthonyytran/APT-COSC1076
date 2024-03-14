#include <iostream>

#define PI 3.14159

// Function prototype
double calculateArea(double radius);

int main()
{
    double radius;

    // Prompt the user to enter the radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate the area of the circle using the function
    double area = calculateArea(radius);

    // Print out the area of the circle
    std::cout << "The area of the circle with radius " << radius << " is: " << area << std::endl;

    return 0;
}

// Function definition to calculate the area of the circle
double calculateArea(double radius)
{
    return PI * radius * radius;
}