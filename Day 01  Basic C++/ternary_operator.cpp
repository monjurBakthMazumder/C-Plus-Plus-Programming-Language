#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x; // Input a number

    // THE TERNARY OPERATOR ( ? : )
    // It fits an entire If-Else logic into one single line!
    // Syntax: (Condition) ? (Do this if True) : (Do this if False);
    
    (x % 2 == 0) ? cout << "Even\n" : cout << "Odd\n";

    return 0;
}