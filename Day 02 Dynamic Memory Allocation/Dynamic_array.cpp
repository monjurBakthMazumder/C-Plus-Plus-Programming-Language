#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ------------------------------
    // Creating a Dynamic Array
    // ------------------------------

    int n;
    cout << "Enter array size: ";
    cin >> n;

    // new int[n] creates an array in HEAP memory
    int *arr = new int[n];

    // Taking input
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];  // same as *(arr + i)
    }

    // Printing the array
    cout << "You entered:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // ------------------------------
    // Must free heap memory
    // ------------------------------
    delete[] arr;   // delete array created with new[]

    return 0;
}
