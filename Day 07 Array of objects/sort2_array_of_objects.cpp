#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

// The "Judge" function for complex sorting
bool cmp(Student l, Student r)
{
    // Scenario 1: Both students have the SAME marks
    if (l.mark == r.mark) 
    {
        // Tie-Breaker: The one with the SMALLER roll number wins (comes first)
        return l.roll < r.roll; 
    }
    // Scenario 2: Marks are different
    else 
    {
        // Regular Rule: The one with HIGHER marks wins (comes first)
        return l.mark > r.mark; 
    }

    // Short version used in your code:
    // return l.mark == r.mark ? l.roll < r.roll : l.mark > r.mark;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }

    // Sort using the complex 'cmp' logic
    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }

    return 0;
}