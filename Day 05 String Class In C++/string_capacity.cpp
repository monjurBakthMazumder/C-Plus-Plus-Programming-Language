#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Initialize a string with a long name
    string s = "Md Monjur Bakth Mazumder";

    // -------------------------------------------------
    // 1. SIZE vs. MAX SIZE vs. CAPACITY
    // -------------------------------------------------
    
    // s.size(): How many characters are ACTUALLY in the string right now?
    // It counts spaces too!
    cout << "Size: " << s.size() << endl; 

    // s.max_size(): How many characters can this string hold theoretically?
    // This is a HUGE number determined by your computer's RAM limits.
    cout << "Max Size: " << s.max_size() << endl; 

    // s.capacity(): How much space has the computer reserved for this string?
    // The computer often reserves MORE space than needed (e.g., 30 slots for 24 chars)
    // so it doesn't have to resize every time you add a single letter.
    cout << "Capacity: " << s.capacity() << endl; 

    // -------------------------------------------------
    // 2. CHECK IF EMPTY
    // -------------------------------------------------
    // s.empty(): Returns 1 (True) if the string has NO characters.
    // Returns 0 (False) if it has text.
    // Since 's' has text, this prints 0.
    cout << "Is Empty?: " << s.empty() << endl; 

    // -------------------------------------------------
    // 3. RESIZING
    // -------------------------------------------------
    // s.resize(5): Force the string to be exactly 5 characters long.
    // If the new size is SMALLER, it chops off the extra letters.
    // If the new size is LARGER, it adds empty spaces (null characters).
    s.resize(5); 
    cout << "After resize(5): " << s << endl; // Output: "Md Mo"

    // -------------------------------------------------
    // 4. CLEARING
    // -------------------------------------------------
    // s.clear(): Deletes ALL characters from the string.
    // The size becomes 0.
    s.clear(); 
    
    cout << "After clear(): " << s << endl; // Output is empty (blank line)
    
    // Verify it's empty now (Should print 1)
    if(s.empty()) cout << "String is now empty!" << endl;

    return 0;
}