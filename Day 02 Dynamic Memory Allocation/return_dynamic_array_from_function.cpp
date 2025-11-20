#include <bits/stdc++.h>
using namespace std;

// ----------------------------------
// Function that creates and returns
// a dynamic array
// ----------------------------------
int* createArray(int n)
{
    // Create a dynamic array in HEAP
    int *arr = new int[n];

    // Put some values (for example: 1, 2, 3...)
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    // Return the address of the array
    return arr;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    // Call the function → it gives us a pointer to the array
    int *result = createArray(n);

    // Printing the array
    cout << "Array from function:\n";
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    // Freeing the dynamic memory created in the function
    delete[] result;

    return 0;
}
