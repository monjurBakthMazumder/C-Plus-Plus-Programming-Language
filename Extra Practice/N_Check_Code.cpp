// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin.ignore();
    cin >> s;

    if (s[a] != '-')
    {
        cout << "No";
        return 0;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (i == a)
        {
            continue;
        }
        if ('9' < s[i] || s[i] < '0')
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}