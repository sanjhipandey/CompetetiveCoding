#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    deque<int> dice(6); // stores 6 elements
    deque<string> alpha{"a", "b", "c", "d"};

    alpha.insert(alpha.begin() + 2, "c");
    for (string x : alpha)
    {
        cout << x << " ";
    }
}
