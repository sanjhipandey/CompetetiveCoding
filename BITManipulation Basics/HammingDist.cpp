#include <iostream>
using namespace std;
int main()
{
    int arr[3] = {3, 4, 12};
    int sum = 0;
    int x, y;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            cout << arr[i] << " " << arr[j] << " ";
            x = arr[i], y = arr[j];
            for (int k = 0; k < 31; k++)

            {

                if (((x & 1) ^ (y & 1)) == 1)
                {
                    sum++;
                }
                x = x >> 1;
                y = y >> 1;
            }
            cout << sum << endl;
        }
    }
    // cout << sum;
}

// int totalHammingDistance(vector<int> nums) {
//     int ans=0,n=nums.size();
//     for(int i=0;i<=30;i++)
//     {
//         int ones=0,zeros=0,val=1<<i;
//         for(int j=0;j<n;j++)
//         {
//             if(nums[j]&val)
//             {
//                 ones++;
//             }
//             else{
//                 zeros++;
//             }
//         }
//         ans+=ones*zeros;
//     }
//     return ans;
// }
