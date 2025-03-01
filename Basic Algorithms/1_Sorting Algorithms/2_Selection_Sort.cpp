#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallindex])
            {
                arr[smallindex] = j;
            }
        }
        swap(arr[i], arr[smallindex]);
    }
    cout << "Sorted arr is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int n;
    cout << "Enter the size of arr : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter arr of element index " << i << ": ";
        cin >> arr[i];
    }
    Selection_Sort(arr, n);
    return 0;
}