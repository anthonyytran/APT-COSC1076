#include <iostream>

using std::cout;
using std::endl;

void foo(int &x, double *y, char &z);

int main(void)
{
    int i = 10;
    double d = 2.5;
    char c = 'e';

    int *iPtr = &i;    // Assign the address of i to iPtr
    double *dPtr = &d; // Assign the address of d to dPtr
    cout << "iPtr = " << iPtr << ", dPtr = " << dPtr << endl;

    // Attempting to dereference uninitialized pointers will lead to undefined behavior
    // cout << "*iPtr = " << *iPtr << ", *dPtr = " << *dPtr << endl;

    *iPtr = 5;    // Assign a value to the memory location pointed by iPtr
    *dPtr = 4.25; // Assign a value to the memory location pointed by dPtr
    cout << "*iPtr = " << *iPtr << ", *dPtr = " << *dPtr << endl;

    cout << "i = " << i << ", d = " << d << ", c = " << c << endl;
    foo(i, dPtr, c);
    cout << "i = " << i << ", d = " << d << ", c = " << c << endl;
    foo(*iPtr, dPtr, c);
    cout << "i = " << i << ", d = " << d << ", c = " << c << endl;

    return EXIT_SUCCESS;
}

void foo(int &x, double *y, char &z)
{
    x += 1;
    *y += 2;
    ++z;
}
