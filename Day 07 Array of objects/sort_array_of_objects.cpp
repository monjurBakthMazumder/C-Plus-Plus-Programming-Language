#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

// The "Judge" function
bool cmp(Student l, Student r)
{
    // Logic: We want smaller marks to come first (Ascending)
    // If l.mark is smaller than r.mark, return true (correct order)
    return l.mark < r.mark; 
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

    // Sort the array 'a' from start to end, using the 'cmp' rule
    sort(a, a + n, cmp);

    // Print the sorted list
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }

    return 0;
}