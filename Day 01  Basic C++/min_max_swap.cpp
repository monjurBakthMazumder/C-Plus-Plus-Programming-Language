#include <iostream>
#include <algorithm> // for min, max, swap
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int mn = min(a, b); // built-in min()
    int mx = max(a, b); // built-in max()

    swap(mn, mx); // built-in swap()

    cout << "After swapping:" << endl;
    cout << "Min = " << mn << endl;
    cout << "Max = " << mx << endl;

    cout << min({4, 6, 9, 6, 2, 0}) << endl;
    cout << max({4, 6, 9, 6, 2, 0}) << endl;

    return 0;
}
