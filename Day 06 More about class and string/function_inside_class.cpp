#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    // 1. THE DATA (The Memory)
    string name;
    int roll;
    int math;
    int english;

    // 2. THE CONSTRUCTOR (The Setup)
    // This runs automatically when we create a new student.
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    // 3. MEMBER FUNCTION (The Action)
    // We don't need to pass 'name' as a parameter!
    // The object already knows its own name.
    void hello()
    {
        cout << "Hello from " << name << endl;
    }

    // 4. ANOTHER ACTION (The Calculator)
    // This function can access 'math' and 'english' directly.
    void total()
    {
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};

int main()
{
    // Create the first object (Robot 1)
    Student monjur("Md Monjur Bakth Mazumder", 24, 56, 80);
    
    // Command Robot 1 to perform actions
    monjur.hello(); // Prints Hello from Monjur
    monjur.total(); // Calculates 56 + 80

    // Create the second object (Robot 2)
    Student masum("Md Masum Bakth Mazumder", 28, 80, 98);
    
    // Command Robot 2 to perform actions
    // Notice: It uses Masum's data, not Monjur's!
    masum.hello(); 
    masum.total(); 

    return 0;
}