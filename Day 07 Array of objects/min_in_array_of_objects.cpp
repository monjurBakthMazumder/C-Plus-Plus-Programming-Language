#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;
    Student a[n]; // Create the array of objects

    // Input loop
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }

    // 1. Create a temporary object to store the minimum result
    Student mini; 
    
    // 2. Set initial "minimum" to the highest possible number.
    // This guarantees the first student we check will replace it.
    mini.mark = INT_MAX; 

    // 3. Loop through the array
    for (int i = 0; i < n; i++)
    {
        // 4. Check if the current student has FEWER marks than our saved minimum
        if (a[i].mark < mini.mark)
        {
            // 5. If yes, copy this student's entire data into 'mini'
            mini = a[i]; 
        }
    }

    // 6. Print the student with the lowest marks
    cout << mini.name << " " << mini.roll << " " << mini.mark << endl;

    return 0;
}