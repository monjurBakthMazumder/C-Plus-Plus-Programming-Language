#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun()
{

    Student a(45, 5, 4.45);
    return a;
}
int main()
{
    Student a = fun();
    cout << a.roll << " " << a.cls << " " << a.gpa << endl;

    return 0;
}