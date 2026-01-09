#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Take an Integer Input
    int x;
    cin >> x; 
    // User types: "10" and presses [Enter]
    // The variable 'x' takes the "10".
    // BUT... the [Enter] (newline character) is left floating in the input buffer!

    string s;

    // 2. The Problem with cin.getline()
    // cin.getline(s, 100); 
    // ^ This command is for C-style character arrays (char s[100]), 
    // NOT for C++ String objects. That's why it is commented out.

    // 3. The Buffer Fix
    // Since 'cin >> x' left an [Enter] in the memory, the next input command 
    // will see that [Enter], think "Oh, the user finished typing!", and store nothing.
    // 'cin.ignore()' eats that leftover [Enter] so the buffer is clean.
    cin.ignore(); 

    // 4. Taking a Full Line of Text
    // We use 'getline' for C++ strings.
    // Syntax: getline(input_source, string_variable);
    // It reads spaces too! (e.g., "Hello World" instead of just "Hello")
    getline(cin, s);

    // 5. Print the results
    cout << x << endl;
    cout << s << endl;

    return 0;
}