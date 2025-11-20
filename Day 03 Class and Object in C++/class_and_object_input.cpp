#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student a1, a2;
    cin >> a1.name >> a1.roll >> a1.gpa;
    cin >> a2.name >> a2.roll >> a2.gpa;
    cout << a1.name << " " << a1.roll << " " << a1.gpa << endl;
    cout << a2.name << " " << a2.roll << " " << a2.gpa << endl;

    return 0;
}