#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void hello()
    {
        cout << "Hello from " << name << endl;
    }
    void total()
    {

        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};

int main()
{
    Student monjur("Md Monjur Bakth Mazumder", 24, 56, 80);
    monjur.hello();
    monjur.total();
    Student masum("Md Masum Bakth Mazumder", 28, 80, 98);
    masum.hello();
    masum.total();

    return 0;
}