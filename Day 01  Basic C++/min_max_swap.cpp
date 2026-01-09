#include <iostream>
#include <algorithm> // IMPORTANT: This library contains the tools for min, max, and swap
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b; // Input: Let's say a = 10, b = 20

    // 1. BUILT-IN FUNCTIONS
    // Instead of writing if-else statements, we use these tools.
    int mn = min(a, b); // Finds the smaller number (10)
    int mx = max(a, b); // Finds the larger number (20)

    // 2. THE SWAP FUNCTION
    // This magically switches the values inside the variables.
    // mn was 10, mx was 20.
    swap(mn, mx); 
    // Now: mn is 20, mx is 10.

    cout << "After swapping:" << endl;
    cout << "Min = " << mn << endl; // Prints 20
    cout << "Max = " << mx << endl; // Prints 10

    // 3. MIN/MAX WITH A LIST
    // You can compare more than two numbers using curly braces { }
    cout << min({4, 6, 9, 6, 2, 0}) << endl; // Looks at the list and finds 0
    cout << max({4, 6, 9, 6, 2, 0}) << endl; // Looks at the list and finds 9

    return 0;
}