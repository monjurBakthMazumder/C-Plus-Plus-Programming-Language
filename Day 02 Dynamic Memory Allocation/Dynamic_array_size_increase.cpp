#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initial size
    int n;
    cout << "Enter initial size: ";
    cin >> n;

    // Create dynamic array
    int *arr = new int[n];

    // Input values
    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // -------------------------------------------
    // Increase size of dynamic array
    // -------------------------------------------

    int newSize;
    cout << "Enter new size: ";
    cin >> newSize;

    // Step 1: Create a new bigger array in heap
    int *newArr = new int[newSize];

    // Step 2: Copy old values
    for (int i = 0; i < n; i++)
    {
        newArr[i] = arr[i];
    }

    // Step 3: Free old array
    delete[] arr;

    // Step 4: Make arr point to new bigger array
    arr = newArr;

    // Step 5: Fill extra space (optional)
    for (int i = n; i < newSize; i++)
    {
        arr[i] = 0; // default value
    }

    // -------------------------------------------
    // Print final array
    // -------------------------------------------
    cout << "Array after resizing:\n";
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free final array
    delete[] arr;

    return 0;
}
