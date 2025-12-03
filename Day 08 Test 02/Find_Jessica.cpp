// problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-08/challenges/find-jessica

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    string word;
    while (ss >> word)
    {
        if (word == "Jessica")
        {

            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}