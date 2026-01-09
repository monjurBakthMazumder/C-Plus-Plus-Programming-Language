#include <iostream>
#include <iomanip> // IMPORTANT: You MUST include this library to use setprecision!
using namespace std;

int main()
{
    // A number with many digits after the dot
    double x = 23.534534;

    // We want to print it nicely (e.g., like money: 23.53)
    // 1. fixed: "Please don't use scientific notation (like 2.3e+1)"
    // 2. setprecision(2): "Show exactly 2 digits after the dot"
    cout << fixed << setprecision(2) << x << endl;

    return 0;
}