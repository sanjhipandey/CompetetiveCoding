#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a = 0;
    vector<int> nums = {1, 1, 3, 1, 2};
    int n = nums.size();
    int i, r;
    for (i = (n - 2); i >= 0; i--)
    {

        if (nums[i] < nums[i + 1])
            break;
    }

    if (i < 0)
        reverse(nums.begin(), nums.end());
    else
    {
        for (r = n - 1; r > i; r--)
        {
            if (nums[r] > nums[i])
                break;
        }
    }

    swap(nums[i], nums[r]);
    reverse(nums.begin() + i + 1, nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
}
