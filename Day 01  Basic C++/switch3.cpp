#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch; // Input a letter

    switch (ch)
    {
    // STACKING CASES (The "Fall-Through" Trick)
    // Notice there are NO 'break' commands here!
    // If ch is 'a', it "falls through" to 'e', then to 'i'...
    // It keeps falling until it hits code and a break.
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A': // We check uppercase too because 'a' is not equal to 'A'
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Vowel\n"; // All the cases above land here!
        break; // Now we stop.

    // If it wasn't any of the vowels above, it must be a consonant.
    default:
        cout << "Consonant\n";
    }

    return 0;
}