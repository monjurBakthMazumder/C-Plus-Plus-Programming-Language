// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

#include <bits/stdc++.h>
using namespace std;

long long factorial(int n, long long fact)
{
    if (n == 0)
        return fact;

    return factorial(n - 1, fact * n);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n, 1);
    return 0;
}

