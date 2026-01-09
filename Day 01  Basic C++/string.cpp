#include <iostream>
using namespace std;

int main()
{
    int x;
    
    // 1. Take a number input (e.g., user types "5" and presses Enter)
    cin >> x; 

    // 2. THE CRITICAL LINE (The Fix)
    // When you typed the number and pressed 'Enter', the number went into 'x',
    // but the 'Enter' key signal (newline) was left floating in the buffer.
    // This command deletes that leftover 'Enter' signal.
    cin.ignore(); 

    // 3. Create a C-style string (a box that can hold 100 letters)
    char s[100];

    // 4. WHY IS THIS COMMENTED OUT?
    // cin >> s; 
    // Because 'cin' hates spaces! If you type "Hello World", 
    // it stops at the space and only saves "Hello".

    // 5. The Better Way to read text
    // "cin.getline" reads the WHOLE line, including spaces.
    // We tell it: "Put text in 's', and don't take more than 100 characters."
    cin.getline(s, 100); 

    // 6. Print the results
    cout << x << endl;
    cout << s << endl;

    return 0;
}