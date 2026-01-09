#include <iostream>
using namespace std;

int main()
{
    // 1. Create three different types of boxes (variables)
    int x;    // Holds a whole number (e.g., 65)
    char c;   // Holds a single character (e.g., 'A')
    double d; // Holds a decimal number (e.g., 5.5)

    // 2. Chained Input
    // The program waits for you to type three things separated by space or enter.
    // First value goes into 'x', second into 'c', third into 'd'.
    cin >> x >> c >> d;

    // 3. Print the values back to check them
    cout << x << endl
         << c << endl
         << d << endl;

    // 4. THE MAGIC TRICK (Type Casting)
    // We force the computer to treat the Character 'c' as a Number.
    cout << (int)c << endl;

    // We force the computer to treat the Number 'x' as a Character.
    cout << (char)x << endl;

    return 0;
}