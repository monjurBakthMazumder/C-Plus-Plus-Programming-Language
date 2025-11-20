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
    Student a;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa << endl;

    Student b;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    Student c;
    getchar();
    cin.getline(c.name, 100);
    cin >> c.roll >> c.gpa;
    cout << c.name << " " << c.roll << " " << c.gpa << endl;

    return 0;
}