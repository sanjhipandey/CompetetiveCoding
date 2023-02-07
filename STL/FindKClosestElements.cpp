#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int k = 4;
    int y = 5;
    vector<int> vec = {1, 2, 3, 5, 12, 14, 20, 56, 4, 1};
    map<int, int> diff;
    sort(vec.begin(), vec.end());
    for (int x : vec)
    {
        diff.insert(x, x - y);
    }
    sort(diff.begin(), diff.end());
    for (int x : vec)
    {
        cout << diff[x] << endl;
    }
}