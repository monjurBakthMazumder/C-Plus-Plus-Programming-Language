#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x; // Get a number from the user

    // THE TRICK: Calculate the remainder FIRST
    // We don't put 'x' in the switch. We put the RESULT of 'x % 2'.
    // The result can ONLY be 0 or 1.
    switch (x % 2)
    {
    case 0: // If the remainder is 0 (e.g., 4 % 2 = 0)
        cout << "Even\n";
        break; 

    case 1: // If the remainder is 1 (e.g., 5 % 2 = 1)
        cout << "Odd\n";
        break; 

    default:
        // This theoretically never happens for positive integers
        cout << "Invalid\n"; 
    }

    return 0;
}