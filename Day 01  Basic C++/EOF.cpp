#include <iostream> // Includes the library to allow Input and Output (cin/cout)
using namespace std; // Lets us use standard names like 'cin' instead of 'std::cin'

int main()
{
    int x; // Create a box (variable) named 'x' to store whole numbers

    // THE MAGIC LINE:
    // 1. It asks the user for input.
    // 2. If you give a number, it stores it in 'x' and enters the loop.
    // 3. If there is no more input (End of File), the loop stops.
    while (cin >> x) 
    {
        cout << x << endl; // Print the number we just received
    }

    return 0; // End the program successfully
}