#include <bits/stdc++.h>
using namespace std;

// 1. THE BLUEPRINT
class Student
{
public:
    char name[100]; // Space for name
    int roll;       // Space for roll
    double gpa;     // Space for gpa
};

int main()
{
    // 2. CREATE THE OBJECT
    Student a; 

    // 3. ASSIGNING NUMBERS (Easy)
    // For numbers (int, double), we can just use the '=' sign.
    // It's like writing "10" in the Roll Number box.
    a.roll = 10;
    a.gpa = 4.50;

    // 4. THE TRICKY PART: STRINGS (Character Arrays)
    // ❌ WRONG WAY: a.name = "Monjur"; 
    // In C++, you CANNOT directly use '=' to copy one array to another.
    
    char temp[100] = "Monjur"; // We create a temporary text string.

    // ✅ RIGHT WAY: strcpy (String Copy)
    // We use a helper function 'strcpy(destination, source)'.
    // It copies the letters "Monjur" one by one into 'a.name'.
    strcpy(a.name, temp);

    // 5. PRINTING
    cout << a.name << " " << a.roll << " " << a.gpa << endl;

    return 0;
}