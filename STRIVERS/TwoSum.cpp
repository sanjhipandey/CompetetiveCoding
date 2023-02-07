#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> muns;
    int t = 9;
    muns = nums;
    sort(nums.begin(), nums.end());
    for (int x : nums)
    {
        cout << x << " ";
    }

    int l = 0;
    int r = (nums.size() - 1);
    int a = 0, b = 0;
    while (l < r)
    {

        int sum = nums[l] + nums[r];

        if (sum == t)
        {
            a = nums[l];
            b = nums[r];
            break;
        }
        else if (sum > t)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    for (int i = 0; i < muns.size(); i++)
    {
        if (muns[i] == a)
        {
            cout << i << endl;
        }
        if (muns[i] == b)
        {
            cout << i << endl;
        }
    }
}