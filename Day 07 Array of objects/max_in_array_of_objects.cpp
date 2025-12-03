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
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }

    Student mini;
    mini.mark = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i].mark > mini.mark)
        {
            mini = a[i];
        }
    }
    cout << mini.name << " " << mini.roll << " " << mini.mark << endl;

    return 0;
}