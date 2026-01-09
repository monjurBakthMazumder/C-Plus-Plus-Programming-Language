#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s; // Input: "Apple"

    // 1. THE TRADITIONAL WAY (Index-Based)
    // "Start at 0, keep going while i is less than size, increase i by 1"
    // We have to manually ask for s[i] every time.
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    cout << endl;

    // 2. THE SHORTCUT WAY (Range-Based)
    // Syntax: for ( dataType variableName : containerName )
    // Read it as: "For every character 'c' inside string 's'..."
    for (char c : s)
    {
        // 'c' automatically holds the value of the current character.
        // First loop: c = 'A'
        // Second loop: c = 'p'
        // ... and so on.
        cout << c << " ";
    }

    return 0;
}