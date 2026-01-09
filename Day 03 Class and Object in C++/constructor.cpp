#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // 1. THE CONSTRUCTOR
    // Rule A: It MUST have the same name as the Class ("Student").
    // Rule B: It has NO return type (not even void).
    // Rule C: It runs automatically the moment an object is created.
    Student(int r, int c, double g)
    {
        // 2. INITIALIZATION
        // The values you sent (r, c, g) are copied into the object's variables.
        roll = r;   // 45 goes into roll
        cls = c;    // 5 goes into cls
        gpa = g;    // 4.45 goes into gpa
    }
};

int main()
{
    // 3. CREATING OBJECT WITH VALUES
    // We don't just say "Student a;". 
    // We are calling the constructor immediately with arguments.
    // This one line creates the object AND fills it with data.
    Student a(45, 5, 4.45);

    cout << a.roll << " " << a.cls << " " << a.gpa << endl;

    return 0;
}