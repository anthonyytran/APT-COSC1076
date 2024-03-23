#include <iostream>

void modifyValueByPointer(double *ptr, double newValue)
{
	*ptr = newValue;
}

void modifyValueByReference(double &ref, double newValue)
{
	ref = newValue;
}

int main()
{
	// Declare and initialize an integer
	int integer = 20;

	// Declare and initialize a pointer to the integer
	int *integerPtr = &integer;

	// Directly modify the value of the integer
	integer = 40;

	// Use the pointer to modify the value of the integer
	*integerPtr = 60;

	// Print value of integer and pointer
	std::cout << "Value of integer: " << integer << std::endl;
	std::cout << "Value of pointer: " << *integerPtr << std::endl;
	std::cout << "---" << std::endl;

	// Declare and initialize a double
	double doubleValue = 3.14;
	std::cout << "Initial double value: " << doubleValue << std::endl;

	// Uses a function to modify the value of the double using a pointer to it
	modifyValueByPointer(&doubleValue, 2.71);
	// Print the value after modification using a pointer
	std::cout << "Value after modification using pointer: " << doubleValue << std::endl;

	// Uses a function to modify the value of the double using a reference to it
	modifyValueByReference(doubleValue, 1.41);
	// Print the value after modification using a reference
	std::cout << "Value after modification using reference: " << doubleValue << std::endl;

	return 0;
}