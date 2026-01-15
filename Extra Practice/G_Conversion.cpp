// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string stirng;
    getline(cin, stirng);
    int k = 0;
    while (k < stirng.length())
    {
        if (stirng[k] == ',')
            stirng[k] = ' ';
        else if (stirng[k] >= 'a' && stirng[k] <= 'z')
            stirng[k] = stirng[k] - 32;
        else if (stirng[k] >= 'A' && stirng[k] <= 'Z')
            stirng[k] = stirng[k] + 32;
        k++;
    }
    cout << stirng << endl;
    return 0;
}