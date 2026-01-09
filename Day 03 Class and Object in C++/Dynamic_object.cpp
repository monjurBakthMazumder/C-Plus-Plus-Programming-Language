#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // 1. CONSTRUCTOR WITH SAME VARIABLE NAMES
    // The inputs are named 'roll', 'cls', 'gpa'.
    // The class variables are ALSO named 'roll', 'cls', 'gpa'.
    Student(int roll, int cls, double gpa)
    {
        // 2. THE 'this' POINTER
        // 'this' is a hidden pointer that points to the object itself.
        
        // Way 1: The Arrow Operator (Standard)
        // "Go to the object 'this' points to, and set its roll."
        this->roll = roll; 

        // Way 2: The Dereference Operator (The "Manual" Way)
        // '(*this)' means: "The object itself".
        // Then we use the dot (.) because (*this) is the object, not a pointer.
        // This line does the EXACT same thing as the line above.
        (*this).cls = cls; 

        // Way 1 again (Best Practice)
        this->gpa = gpa; 
    }
};

int main()
{
    // 3. CREATING A DYNAMIC OBJECT
    // 'new Student(...)' creates the object in the Heap memory.
    // It returns the ADDRESS of that object.
    // We store that address in the pointer '*a'.
    Student *a = new Student(45, 5, 4.45);

    // 4. ACCESSING DATA VIA POINTER
    // Since 'a' is a pointer (holds an address), we CANNOT use the dot (.).
    // We must use the arrow (->).
    cout << a->roll << " " << a->cls << " " << a->gpa << endl;

    // Optional: Clean up memory
    // delete a; 

    return 0;
}