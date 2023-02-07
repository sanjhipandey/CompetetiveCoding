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

void selsort(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        int min = i;

        for (int j = i; j < n; j++)
        {

            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        swap(&arr[i], &arr[min]);
    }
}

int main()
{
    int arr[10] = {12, 23, 81, 32, 11, 4, 56, 48, 10, 99};
    int n = sizeof(arr) / sizeof(int);
    selsort(arr, n);
    cout << "The sorted array is" << endl;
    printarray(arr, n);
}