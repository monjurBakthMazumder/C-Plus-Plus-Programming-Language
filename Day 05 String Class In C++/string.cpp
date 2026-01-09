#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Create a String Box
    // We create a variable 's' and put the text "monjur" inside it.
    // The computer reserves just enough memory for these 6 letters.
    string s = "monjur"; 

    // 2. Re-assigning (Overwriting)
    // Now we say: "Forget 'monjur'. Put this NEW long name inside instead."
    // Unlike C-style arrays (char s[10]), you don't need to worry about size.
    // C++ automatically deletes the old small memory and creates a bigger space 
    // to fit the new long name. It manages the memory for you!
    s = "Md Monjur Bakth Mazumder"; 

    // 3. Print the result
    // It prints the LATEST value inside the box.
    cout << s << endl; 

    return 0;
}