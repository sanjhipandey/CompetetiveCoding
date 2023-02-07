#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect = {6, 3, 3, 6, 3, 34, 3, 2, 2};
    int ele;
    int count = 0;
    for (int i = 0; i < vect.size(); i++)
    {
        if (count == 0)
        {
            ele = vect[i];
                }
        if (ele == vect[i])
        {
            count = count + 2;
        }
        else
        {
            count--;
        }
    }
    cout << ele;
}