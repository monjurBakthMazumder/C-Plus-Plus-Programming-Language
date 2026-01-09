#include <bits/stdc++.h> // Includes the 'algorithm' library where 'sort' lives
using namespace std;

int main()
{
    string s = "monjurv";

    // THE SORT FUNCTION
    // 1. s.begin() -> Start of the string
    // 2. s.end()   -> End of the string
    // It rearranges the characters inside 's' from lowest ASCII to highest.
    sort(s.begin(), s.end());

    // Original: m  o  n  j  u  r  v
    // Sorted:   j  m  n  o  r  u  v
    //           ^  ^  ^  ^  ^  ^  ^
    //          (First alphabetically)

    cout << s << endl; // Prints: jmnoruv

    return 0;
}