#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Md Monjur Bakth Mazumder";

    // -------------------------------------------------
    // 1. WHAT ARE ITERATORS?
    // -------------------------------------------------
    // Think of an Iterator as a "Pointer" or a "Finger" pointing at a specific letter.
    // s.begin() -> Points to the FIRST character ('M')
    // s.end()   -> Points to the weird space AFTER the last character (Null terminator)
    
    // To see the letter being pointed at, we use the * (dereference) symbol.
    
    cout << *s.begin() << endl;       // Prints 'M'
    cout << *(s.end() - 1) << endl;   // s.end() is outside, so we step back 1 to get 'r'

    // -------------------------------------------------
    // 2. METHOD 1: The Index Loop (Old School)
    // -------------------------------------------------
    // This is what you already know. We use a number 'i' to visit 0, 1, 2...
    for(int i = 0; i < s.size(); i++){
        cout << s[i] << " ";
    }

    cout << endl << endl;

    // -------------------------------------------------
    // 3. METHOD 2: The Iterator Loop (Professional Way)
    // -------------------------------------------------
    // Instead of an integer 'i', we create a specific iterator 'j'.
    // type: string::iterator
    // start: s.begin()
    // stop:  when j reaches s.end()
    for(string::iterator j = s.begin(); j < s.end(); j++){
        cout << *j << " "; // We must use *j to see the value
    }

    cout << endl << endl;

    // -------------------------------------------------
    // 4. METHOD 3: The "Auto" Shortcut
    // -------------------------------------------------
    // Writing "string::iterator" is long and boring.
    // The keyword 'auto' tells C++: "You figure out the type yourself!"
    // It works exactly the same as above but is cleaner to write.
    for(auto j = s.begin(); j < s.end(); j++){
        cout << *j << " ";
    }

    return 0;
}