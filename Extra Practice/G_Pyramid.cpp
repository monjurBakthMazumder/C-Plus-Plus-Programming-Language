// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++){
            cout << " ";
        }
        for (int j = 0; j < (i*2)-1; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}