#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> nums = {-1, 1, 2, 4, 1};
    int l = 0, r = 0;
    int sum = 0;
    int n = nums.size();
    for (l = 0; l < n; l++)
    {

        for (r = l; r < n; r++)
        {
            int s = 0;

            for (int i = l; i <= r; i++)
            {
                s += nums[i];
            }

            // for(int i=0;i<){

            // }
            cout << s << endl;
            if (s > sum)
            {
                sum = s;
            }
        }
    }

    cout << sum;
}