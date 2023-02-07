#include <iostream>
using namespace std;

int main()
{
    int x = 9, y = 8;
    int a, b, sum = 0;
    for (int i = 0; i < 31; i++)
    {
        a = x & 1;
        b = y & 1;
        if (a ^ b)
        {
            sum++;
        }
        x = x >> 1;
        y = y >> 1;
    }
    cout << sum;
}