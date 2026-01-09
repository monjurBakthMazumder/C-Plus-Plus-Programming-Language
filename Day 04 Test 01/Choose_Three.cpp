// problem link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-08/challenges/choose-three

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int flag = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    int sum = a[i] + a[j] + a[k];
                    if (sum == m)
                    {
                        flag = 1;
                    }
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}