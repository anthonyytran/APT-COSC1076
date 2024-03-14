#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age;
    std::string dob;

    // Prompt the user for their information
    std::cout << "What is your name? ";
    std::cin >> name;

    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "What is your date of birth? (DD/MM/YYYY) ";
    std::cin >> dob;

    // Output the user's information
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << " years old" << std::endl;
    std::cout << "DOB: " << dob << std::endl;
}