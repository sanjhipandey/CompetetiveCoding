#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    int a = 6, b = 4, c = 5;
    int sum = 0;
    array<int, 3> arr = {a, b, c};
    while ((arr[0] != 0 && arr[1] != 0) || (arr[2] != 0 && arr[1] != 0) || (arr[2] != 0 && arr[0] != 0))
    {
        sort(arr.begin(), arr.end());
        cout << arr[0] << " ";
        cout << arr[1] << " ";
        cout << arr[2] << endl;
        sum += 1;
        arr[2]--;
        arr[1]--;
    }
    cout << sum;
}