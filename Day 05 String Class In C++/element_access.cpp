#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Create a string variable
    string s;
    
    // 2. Take input from user
    // Example: If you type "Elephant", 's' becomes "Elephant"
    // Note: cin stops reading at the first space!
    cin >> s; 

    // -------------------------------------------------
    // METHOD 1: The Array Style (Index)
    // -------------------------------------------------
    // Strings are numbered starting from 0.
    // E (0) - l (1) - e (2) - p (3)...
    // s[2] grabs the character at index 2 (the 3rd letter).
    cout << "Using []: " << s[2] << endl; 

    // -------------------------------------------------
    // METHOD 2: The Safe Way (.at)
    // -------------------------------------------------
    // This does the exact same thing as s[2], BUT it is safer.
    // If you try to access index 100 in a short word, 
    // s[2] might crash or give garbage, but s.at(2) will tell you "Error!".
    cout << "Using at(): " << s.at(2) << endl; 

    // -------------------------------------------------
    // METHOD 3: The Last Character (.back)
    // -------------------------------------------------
    // A shortcut to get the very last letter of the word.
    // No need to calculate the length!
    cout << "Last char: " << s.back() << endl; 

    // -------------------------------------------------
    // METHOD 4: The First Character (.front)
    // -------------------------------------------------
    // A shortcut to get the very first letter (Index 0).
    cout << "First char: " << s.front() << endl; 

    return 0;
}