// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

#include <bits/stdc++.h>
using namespace std;

long long int sum (int idx,int arr[], int n){
    if(idx == n-1){
        return arr[idx];
    }
    long long total = sum(idx+1,arr,n);
    return total += arr[idx];
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sum(0,arr,n);
    return 0;
}