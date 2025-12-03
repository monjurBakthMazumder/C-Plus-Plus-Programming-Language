// problem link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-08/challenges/who-is-it-4

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char sec;
    int mark;
};
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.sec >> a.mark;
        cin >> b.id >> b.name >> b.sec >> b.mark;
        cin >> c.id >> c.name >> c.sec >> c.mark;

        int maxMark = max({a.mark, b.mark, c.mark});

        if (a.mark == maxMark)
        {
            cout << a.id << " " << a.name << " " << a.sec << " " << a.mark << endl;
        }
        else if (b.mark == maxMark)
        {
            cout << b.id << " " << b.name << " " << b.sec << " " << b.mark << endl;
        }
        else if (c.mark == maxMark)
        {
            cout << c.id << " " << c.name << " " << c.sec << " " << c.mark << endl;
        }
    }

    return 0;
}