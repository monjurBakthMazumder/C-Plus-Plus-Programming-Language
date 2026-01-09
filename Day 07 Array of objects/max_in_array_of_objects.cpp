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
    Student a[n]; // Create array of objects

    // Input loop
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }

    // 1. Create a temporary object to store the winner
    Student result; 
    
    // 2. Set the initial "highest score" to the lowest possible number
    // This ensures the first student will automatically replace this.
    result.mark = INT_MIN; 

    // 3. Loop through everyone to find the highest
    for (int i = 0; i < n; i++)
    {
        // Check if current student's mark is higher than our current best
        if (a[i].mark > result.mark)
        {
            // Update the result object with the current student's data
            result = a[i]; 
        }
    }

    // 4. Print the details of the student with the highest marks
    cout << result.name << " " << result.roll << " " << result.mark << endl;

    return 0;
}