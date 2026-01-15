// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string stirng;
    getline(cin, stirng);
    int count[26] = {0};

    for(int i = 0; i < stirng.length(); i++){
        count[stirng[i] - 'a']++;
    }

   for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            char cc = i + 'a';
            cout << cc << " : " << count[i] << "\n";
        }
    }
    return 0;
}