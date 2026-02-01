// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const vector<long long> &a, int l, int r)
{
    if (l >= r)
        return true;
    if (a[l] != a[r])
        return false;
    return isPalindrome(a, l + 1, r - 1);
}

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (isPalindrome(a, 0, n - 1))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
