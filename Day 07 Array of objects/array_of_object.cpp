#include <bits/stdc++.h>
using namespace std;

// 1. Create the template (Class)
class Student
{
public:
    string name; // Holds the student's name
    int roll;    // Holds the roll number
    int mark;    // Holds the marks
};

int main()
{
    int n;
    // 2. Ask how many students to record
    cin >> n; 

    // 3. Create an array of objects
    // This creates 'n' empty Student objects at once
    Student a[n]; 

    // 4. Input Loop: Fill in the details for each student
    for (int i = 0; i < n; i++)
    {
        // IMPORTANT: Clear the "Enter" key left over from the previous 'cin'
        // If we don't do this, getline() will skip the name input!
        cin.ignore(); 

        // Take the name input (allows spaces, e.g., "Rahim Uddin")
        // We store it in the 'name' variable of the i-th student object
        getline(cin, a[i].name); 

        // Take roll and mark input for the i-th student
        cin >> a[i].roll >> a[i].mark;
    }

    // 5. Output Loop: Print the details back
    for (int i = 0; i < n; i++)
    {
        // Print the name, roll, and mark for the i-th student
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }

    return 0;
}