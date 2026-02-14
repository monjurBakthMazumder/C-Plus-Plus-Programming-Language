// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S

#include <bits/stdc++.h>
using namespace std;
double recursiveSum(const vector<long long> &arr, int n)
{
    if (n == 0)
        return 0.0;
    return arr[n - 1] + recursiveSum(arr, n - 1);
}
int main()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    double sum = recursiveSum(arr, n);
    double average = sum / n;
    cout << fixed << setprecision(6) << average << endl;

    return 0;
}
