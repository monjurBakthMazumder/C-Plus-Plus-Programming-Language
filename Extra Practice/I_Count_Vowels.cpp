// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

#include <bits/stdc++.h>
using namespace std;
int countVowels(const string &s, int index) {
    if (index == s.length())
        return 0;
    char ch = tolower(s[index]);
    int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || 
                   ch == 'o' || ch == 'u');
    return isVowel + countVowels(s, index + 1);
}

int main() {
    string s;
    getline(cin, s);
    cout << countVowels(s, 0);
    return 0;
}
