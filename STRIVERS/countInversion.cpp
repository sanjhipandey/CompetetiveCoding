#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {2, 5, 1, 3, 4};
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] > arr[j]) && (i < j))
            {
                swap(arr[i], arr[j]);
                count++;
            }
        }
    }

    cout << count;
}