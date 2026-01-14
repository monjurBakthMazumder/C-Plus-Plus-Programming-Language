// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    
    stringstream ss1(s1); 
    string word1;
    ss1 >> word1;
    ss1 >> word1;

    
    stringstream ss2(s2); 
    string word2;
    ss2 >> word2;
    ss2 >> word2;


    if(word1 == word2){
        cout << "ARE Brothers";
    }else{
        cout << "NOT";
    }

    return 0;
}