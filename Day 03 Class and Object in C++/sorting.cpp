#include <bits/stdc++.h> // Includes the library for 'sort()'
using namespace std;

int main()
{
    // 1. INPUT THE ARRAY
    int n;
    cin >> n; // How many numbers? (e.g., 5)
    
    int a[n]; // Create the array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // Input: 5 2 9 1 6
    }

    // 2. ASCENDING SORT (Small -> Big)
    // Syntax: sort(starting_address, ending_address);
    // 'a' is the beginning.
    // 'a + n' is the point just AFTER the last element.
    // After this line, array becomes: 1 2 5 6 9
    sort(a, a + n); 

    // 3. DESCENDING SORT (Big -> Small)
    // We add a third argument: a "Comparator" or rule.
    // 'greater<int>()' tells C++: "Put the GREATER numbers first."
    // After this line, array becomes: 9 6 5 2 1
    sort(a, a + n, greater<int>());

    // 4. PRINTING THE FINAL RESULT
    // Since we sorted it twice, the array is currently in DESCENDING order.
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}