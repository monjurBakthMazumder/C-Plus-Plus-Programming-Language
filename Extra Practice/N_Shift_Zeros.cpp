// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N

#include <bits/stdc++.h>
using namespace std;

void fun(int arr[], int n) {
    int pos = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[pos++] = arr[i];
        }else{
            zero ++;
        }
    }
    while (zero--) {
        arr[pos++] = 0;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    fun(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
