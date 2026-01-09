#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // 1. THE CONSTRUCTOR
    // This function runs automatically when you create a Student object.
    // It expects 3 values: r, c, and g.
    Student(int r, int c, double g)
    {
        // It takes the values you sent and puts them into the object's variables.
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    // 2. TEMPORARY VARIABLES (The Raw Materials)
    // We need temporary places to store the user's input before we build the Student.
    int r;
    int c;
    double g;

    // 3. GETTING THE ORDER
    // We take input from the user first.
    // Example: User types "101 9 4.5"
    cin >> r >> c >> g;

    // 4. BUILDING THE OBJECT
    // We create 'Student a' and immediately pass the user's input (r, c, g) to the constructor.
    // The constructor catches these values and sets up the student.
    Student a(r, c, g);

    // 5. PRINTING
    cout << a.roll << " " << a.cls << " " << a.gpa << endl;

    return 0;
}