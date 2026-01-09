#include <bits/stdc++.h> // Includes the 'algorithm' library where 'reverse' lives
using namespace std;

int main()
{
    string s = "monjur";

    // THE MAGIC FUNCTION
    // Syntax: reverse(Start_Pointer, End_Pointer);
    // 1. s.begin() -> Points to the start ('m')
    // 2. s.end()   -> Points to the end (after 'r')
    // This physically changes 's'. It is now "rujnom".
    reverse(s.begin(), s.end());

    cout << s << endl; // Prints: rujnom

    return 0;
}