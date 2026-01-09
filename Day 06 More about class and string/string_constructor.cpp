#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. STANDARD CONSTRUCTION
    // "Just build exactly what I say."
    string s1("Hello"); 
    cout << s1 << endl; // Output: Hello

    // 2. PARTIAL COPY (From Raw Text)
    // Syntax: string( "Text", Count )
    // Meaning: "Take the FIRST 2 characters from 'Hello'."
    string s2("Hello", 2);
    cout << s2 << endl; // Output: He

    // 3. COPY WITH OFFSET (From Another String Variable)
    // Syntax: string( ExistingString, StartIndex )
    // Meaning: "Start from Index 2 (skip 0 and 1) and copy the REST."
    // H(0) e(1) l(2) l(3) o(4)
    //           ^----------- Start here!
    string s3 = "Hello";
    string t(s3, 2); 
    cout << t << endl; // Output: llo

    // 4. FILL CONSTRUCTOR (Repetition)
    // Syntax: string( Count, Character )
    // Meaning: "Write the letter 'a', 5 times."
    string s4(5, 'a');
    cout << s4 << endl; // Output: aaaaa

    return 0;
}