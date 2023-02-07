#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 7;
    int ans = 5;
    for (int i = a; i <= b; i++)
    {
        ans = (ans & i);
    };
    cout << ans;
}