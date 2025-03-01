#include <bits/stdc++.h>
using namespace std;

void Bubble_Sort(int arr[], int n)
{
    bool checkSwap = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                checkSwap = true;
            }
        }
    }
    cout << "Sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    if (!checkSwap)
        return; // means array is already sorted
}
int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of arr index " << i << ": ";
        cin >> arr[i];
    }
    Bubble_Sort(arr, n);
    return 0;
}

/*Bubble Short Algo rule
1 arr me n-1 time ka loop chalate hai
2 arjsted element ko compare karate hai means index 1 element compare to index 2 element
3 largest element ko last me push kr dete hai swap method ka use karake

Bubble Sort ki Time Complexsity O(N^2) hoti hai
*/
