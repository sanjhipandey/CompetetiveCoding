#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    int p = 1;
    int ans = 0;
    while (n > 0)
    {
        int last_bit = n & 1;
        ans += p * last_bit;

        p = p * 10;
        n = n >> 1;
        }
    cout << ans;
}