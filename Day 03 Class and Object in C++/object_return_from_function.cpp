#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // 1. CONSTRUCTOR
    // We use 'this' because the input names (roll) match the class variable names.
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

// 2. THE FUNCTION
// The return type is 'Student'. This means: "I promise to send back a full Student object."
Student fun()
{
    // 3. CREATION (Local Object)
    // This object 'a' is created inside 'fun'.
    // It is a LOCAL variable. It normally dies when the function ends.
    Student a(45, 5, 4.45);
    
    // 4. RETURNING
    // When we say 'return a', C++ makes a COPY of the values in 'a'.
    // It sends that copy to whoever called this function.
    return a;
}

int main()
{
    // 5. RECEIVING THE OBJECT
    // We call 'fun()'. It runs, creates a student, and throws a copy back here.
    // We catch that copy and store it in our own variable 'a' inside main.
    // NOTE: The 'a' in main and the 'a' in fun are TWO DIFFERENT variables in memory!
    Student a = fun();

    // 6. PRINTING
    // Since this is a normal object (not a pointer), we use the dot (.) operator.
    cout << a.roll << " " << a.cls << " " << a.gpa << endl;

    return 0;
}