#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main()
{
    Student a(45, 5, 4.45);

    cout << a.roll << " " << a.cls << " " << a.gpa << endl;

    return 0;
}