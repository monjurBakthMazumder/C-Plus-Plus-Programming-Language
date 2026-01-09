#include <iostream>
using namespace std;

int main()
{
    int day;
    // Ask the user for a number (1 to 7)
    cin >> day;

    // THE SWITCH: Think of this like a vending machine.
    // We put the variable 'day' inside, and it looks for the matching button.
    switch (day)
    {
    case 1: // If day is 1...
        cout << "Saturday\n";
        break; // STOP here and leave the switch.

    case 2: // If day is 2...
        cout << "Sunday\n";
        break; // STOP here and leave the switch.

    case 3: // If day is 3...
        cout << "Monday\n";
        break;

    case 4: 
        cout << "Tuesday\n";
        break;

    case 5: 
        cout << "Wednesday\n";
        break;

    case 6: 
        cout << "Thursday\n";
        break;

    case 7: 
        cout << "Friday\n";
        break;

    // DEFAULT: This runs if NO cases match (like an 'else')
    default:
        cout << "Invalid day! Please enter 1-7.\n";
    }

    return 0;
}