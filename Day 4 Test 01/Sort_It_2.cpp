// problem link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-08/challenges/sort-it-2-1-1

#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // descending;
    sort(a, a + n, greater<int>());
    
    return a;
}
int main()
{
    int n;
    cin >> n;
    int *a = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}