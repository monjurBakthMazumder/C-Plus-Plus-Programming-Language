// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        for (int j = (n*2)-(i*2); j >  1; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}