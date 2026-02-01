// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M

#include <bits/stdc++.h>
using namespace std;

long long int SuffixSum(int idx, int arr[], int n, int m)
{
    if (idx == n - 1)
    {
        return arr[idx];
    }
    long long total = SuffixSum(idx + 1, arr, n, m);
    if ((n - m) <= idx)
    {
        return total += arr[idx];
    }
    return total;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << SuffixSum(0, arr, n, m);
    return 0;
}