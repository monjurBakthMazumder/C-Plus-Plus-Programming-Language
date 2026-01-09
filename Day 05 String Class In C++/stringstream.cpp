#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Get the full sentence
    string s;
    // Assume user types: "I love coding in C++"
    getline(cin, s); 
    cout << "Original String: " << s << endl;

    // 2. Initialize the StringStream
    // Think of 'ss' as a special buffer or "Stream".
    // We put the whole string 's' INSIDE this stream.
    stringstream ss(s); 

    /* ---------------------------------------------
    THE MANUAL WAY (Commented Out)
    ---------------------------------------------
    string word;
    
    // The '>>' operator reads from the stream until it hits a space.
    ss >> word; // Reads "I"
    cout << word << endl;

    ss >> word; // Reads "love" (it remembers where it left off!)
    cout << word << endl;
    
    // ... You would have to repeat this for every word. 
    // But we don't know how many words are in the sentence!
    */

    // 3. THE AUTOMATIC WAY (While Loop)
    string word;
    
    // The condition (ss >> word) does two things:
    // A. It tries to grab the next word from the stream.
    // B. If it succeeds (there was a word), it returns TRUE (Loop runs).
    // C. If the stream is empty (no more words), it returns FALSE (Loop stops).
    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}