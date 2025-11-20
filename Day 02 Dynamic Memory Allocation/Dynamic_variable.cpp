#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Normal variable stored in stack memory
    int x = 100;
    cout << x << endl;   // Output: 100


    // -------------------------
    // Dynamic Variable in C++
    // -------------------------
    // 'new int' creates a memory space in HEAP and returns its address
    int *p = new int;

    // Store a value in that heap memory
    *p = 10;

    // Print the address stored in pointer p (looks like 0x7ffe...)
    cout << p << endl;

    // Print the value stored at that address (10)
    cout << *p << endl;


    // Always delete memory created with 'new'
    delete p;

    return 0;
}
