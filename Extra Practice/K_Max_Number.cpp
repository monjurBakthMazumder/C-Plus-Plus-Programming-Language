// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K

#include <bits/stdc++.h>
using namespace std;

long long maxElement(int index, int n, vector<long long> &a)
{
    if (index == n - 1)
        return a[index];
    long long mx = maxElement(index + 1, n, a);
    return max(a[index], mx);
}

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << maxElement(0, n, a) << endl;
    return 0;
}
