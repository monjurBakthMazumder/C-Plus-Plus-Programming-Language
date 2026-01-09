#include <bits/stdc++.h>
using namespace std;

// 1. THE BLUEPRINT (Class)
// We define a new type called 'Student'. 
// It groups three pieces of information together.
class Student
{
public:
    char name[100]; // Can hold a name
    int roll;       // Can hold a roll number
    double gpa;     // Can hold a GPA
};

int main()
{
    // 2. CREATING OBJECTS
    // We create two separate "students" named 'a1' and 'a2'.
    // They share the same structure but will hold different data.
    Student a1, a2;

    // 3. TAKING INPUT (The Dot Operator)
    // To access the 'name' inside 'a1', we use 'a1.name'.
    // NOTE: 'cin' stops reading at a space. 
    // If you type "Rahim Uddin", it will only take "Rahim" and leave "Uddin" for the next variable!
    cin >> a1.name >> a1.roll >> a1.gpa;
    
    // Taking input for the second student
    cin >> a2.name >> a2.roll >> a2.gpa;

    // 4. PRINTING OUTPUT
    // We access the specific data for 'a1' and 'a2' using the dot (.) again.
    cout << a1.name << " " << a1.roll << " " << a1.gpa << endl;
    cout << a2.name << " " << a2.roll << " " << a2.gpa << endl;

    return 0;
}