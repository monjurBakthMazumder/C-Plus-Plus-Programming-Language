#include <bits/stdc++.h>
using namespace std;

// 1. THE BLUEPRINT (Class)
// We are designing a custom data type called 'Student'.
// Unlike 'int' which only holds numbers, 'Student' can hold a name, roll, and gpa all at once!
class Student
{
public:          // 'public' means "Open for everyone". Without this, we can't access these variables outside the class.
    char name[100]; // Holds the name (up to 100 letters)
    int roll;       // Holds the roll number
    double gpa;     // Holds the GPA
};

int main()
{
    // 2. BUILDING THE FIRST HOUSE (Object 'a')
    Student a; 
    
    // We use 'cin.getline' because 'cin' stops reading when it sees a space.
    // If the name is "Rahim Uddin", 'cin' would only take "Rahim".
    // 'cin.getline' takes the whole line including spaces.
    cin.getline(a.name, 100); 
    
    cin >> a.roll >> a.gpa;
    
    // Printing the data for Student 'a'
    cout << a.name << " " << a.roll << " " << a.gpa << endl;

    // ---------------------------------------------------------
    
    // 3. THE TRAP (Input Buffer Issue)
    // When you typed the GPA for student 'a' (e.g., 3.50) and pressed ENTER:
    // The computer took '3.50' into the variable 'gpa'.
    // BUT... the 'Enter' key signal (newline) is still floating in the memory buffer!
    
    Student b;

    // 4. THE FIX (cin.ignore)
    // If we don't write this, the next 'getline' will see that leftover 'Enter' key,
    // think "Oh, the user finished typing!", and store an empty string.
    // 'cin.ignore()' eats that leftover 'Enter' key so the path is clear.
    cin.ignore(); 
    
    cin.getline(b.name, 100); 
    cin >> b.roll >> b.gpa;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    // ---------------------------------------------------------

    // 5. BUILDING THE THIRD HOUSE (Object 'c')
    Student c;

    // 6. ANOTHER FIX (getchar)
    // 'getchar()' does the exact same thing as 'cin.ignore()' here.
    // It grabs one character (the leftover Enter key) and throws it away.
    getchar(); 

    cin.getline(c.name, 100);
    cin >> c.roll >> c.gpa;
    cout << c.name << " " << c.roll << " " << c.gpa << endl;

    return 0;
}