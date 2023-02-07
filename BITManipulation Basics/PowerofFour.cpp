#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    if (n <= 0)
    {
        return false;
    }
    cout << ((n & (n - 1)) == 0 && (1431655765 & n) == n);
}