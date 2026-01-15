// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string stirng1, stirng2, stirng3;
        cin >> stirng1 >> stirng2;

        int l = max(stirng1.length(), stirng2.length());

        int i =0 ;
        while (i < l)
        {
            if (i < stirng1.length())
            {
                stirng3.push_back(stirng1[i]);
            }
            if (i < stirng2.length())
            {
                stirng3.push_back(stirng2[i]);
            }
            i++;
        }
        cout << stirng3 << endl;
    }

    return 0;
}