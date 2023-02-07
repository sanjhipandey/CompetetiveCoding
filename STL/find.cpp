#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array<int, 7> arr = {1, 3, 3, 3, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    auto i = find(arr.begin(), arr.begin() + n, 5);
    int index = i - arr.begin();

    auto x = upper_bound(arr.begin(), arr.end(), 3);
    auto y = lower_bound(arr.begin(), arr.end(), 3);

    cout << (x - arr.begin()) << (y - arr.begin());

    if (index == n)
    {
        cout << "array not found";
    }
    else
    {
        cout << "array found at loc " << index;
    }
}