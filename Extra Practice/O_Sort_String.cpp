// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int freq[26] = {0};
    char c;
    for (int i = 0; i < N; i++)
    {
        cin >> c;
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            cout << char(i + 'a');
        }
    }

    return 0;
}