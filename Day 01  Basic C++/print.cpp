#include <iostream> // Includes the tool for printing

int main()
{
    // 1. BASIC PRINTING
    // "std::cout" is the tool to print to screen.
    // "std::endl" means End Line (it's like pressing Enter).
    std::cout << "Hello World" << std::endl;

    // 2. CREATING VARIABLES
    int x = 100;        // A whole number
    char a = 'A';       // A single letter
    double d = 37.564;  // A decimal number

    // 3. CHAINING OUTPUT
    // You can print multiple things in one line by using '<<' repeatedly.
    // We print: x, then a space " ", then a, then a space " ", then d.
    std::cout << x << " " << a << " " << d << std::endl;

    return 0;
}