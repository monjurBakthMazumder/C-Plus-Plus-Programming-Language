#include <iostream>
using namespace std;

int main()
{
    // 1. Create a variable 'x' and give it the value 7
    int x = 7;

    // 2. The Condition ( The Question )
    // We calculate "x % 2". The '%' symbol is the Modulo operator.
    // It divides x by 2 and gives us the REMAINDER.
    // If the remainder is 0, the number is Even.
    if (x % 2 == 0)
    {
        // 3. This runs ONLY if the condition is True (Yes)
        cout << "Even \n";
    }
    else
    {
        // 4. This runs ONLY if the condition is False (No)
        cout << "Odd";
    }

    return 0;
}