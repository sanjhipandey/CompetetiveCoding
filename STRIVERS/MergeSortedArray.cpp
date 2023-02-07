#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums1 = {1, 12, 13, 34, 0, 0, 0, 0};
    vector<int> nums2 = {2, 25, 21, 24};
    int a = nums1.size();
    int b = nums2.size();
    int j = 0;

    for (int i = (a - b); i < (a); i++)
    {

        nums1[i] = nums2[j];
        cout << j << " " << nums2[j] << " " << nums1[i] << endl;
        j++;
    }
    sort(nums1.begin(), nums1.end());
    for (int i = 0; i < a; i++)
    {
        cout << nums1[i] << " ";
    }
}