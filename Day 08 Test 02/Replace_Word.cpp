// problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-08/challenges/replace-word

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, x;
        cin >> s >> x;
        int x_size = x.size();
        for (int i = 0; i < s.size(); i++)
        {
            int k = 0;
            int flag = 0;
            if (s[i] == x[k])
            {
                int j = i;
                flag = 1;
                for (k = 0; k < x_size; k++)
                {
                    if (s[j] == x[k])
                    {
                        j++;
                    }
                    else
                    {
                        flag = 0;
                    }
                }
            }
            if (flag)
            {
                s.replace(i, x_size, "#");
            }
        }
        cout << s << endl;
    }

    return 0;
}