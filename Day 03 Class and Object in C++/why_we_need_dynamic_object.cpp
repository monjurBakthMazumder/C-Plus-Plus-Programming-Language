#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()
{
    // 1. LOCAL OBJECT CREATION
    // 'a' is created on the STACK.
    // It is temporary. It only lives inside these curly braces { }.
    Student a(45, 5, 4.45);
    
    // 2. TAKING THE ADDRESS
    // We get the memory address of 'a'. Let's say it's Address #500.
    Student *p = &a;
    
    // 3. RETURNING THE ADDRESS
    // We return #500 to main.
    // ⚠️ CRITICAL MOMENT: As soon as we hit 'return', 'a' is destroyed.
    // Memory #500 is now marked as "free" and contains garbage.
    return p;
}

int main()
{
    // 4. RECEIVING THE GHOST POINTER
    // 'a' now holds Address #500.
    Student *a = fun();
    
    // 5. UNDEFINED BEHAVIOR
    // We try to look inside Address #500.
    // BUT the student is gone!
    // This will print garbage values, 0, or might even crash the program.
    cout << a->roll << " " << a->cls << " " << a->gpa << endl;

    return 0;
}