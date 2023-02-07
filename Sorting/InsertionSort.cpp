#include <iostream>
using namespace std;
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void insertsort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(&arr[j - 1], &arr[j]);
            }
            j--;
        }
    }
}
int main()
{
    int arr[10] = {12, 23, 81, 32, 11, 4, 56, 48, 10, 99};
    int n = sizeof(arr) / sizeof(int);
    insertsort(arr, n);
    cout << "The sorted array is" << endl;
    printarray(arr, n);
}

// O(n^2)