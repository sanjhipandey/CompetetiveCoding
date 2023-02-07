#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 7;
    int ans = 0;
    int sum = 0;
    int p[2] = {1, 0};

    while (n > 0)
    {
        int ans = 0, cnt = 0;
        for (int i = 0; i < 31; i++)
        {
            int val = 1 << i;
            if (val & n)
            {
                cnt++;
                ans = max(ans, cnt);
            }
            else
            {
                cnt = 0;
            }
        }
        return ans;
    }