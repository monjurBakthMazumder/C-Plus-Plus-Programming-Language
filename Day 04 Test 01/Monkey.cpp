// problem link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-08/challenges/monkey-1-2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100001];

    while (cin.getline(a, 100001))
    {
        int l = strlen(a);
        sort(a, a + l);

        char b[100001];
        int j = 0;
        for (int i = 0; i < l; i++)
        {
            if (a[i] != ' ')
            {
                b[j] = a[i];
                j++;
            }
        }
        b[j] = '\0';

        cout << b << endl;
    }

    return 0;
}
