#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect = {2, 1, 1, 1, 1, 1, 1, 2, 2};
    int ele;
    int count = 0;
    for (int i = 0; i < vect.size(); i++)
    {
        if (count == 0)
        {
            ele = vect[i];
        }
        else if (ele == vect[i])
        {
            count++;
        }
        else
        {
            count = count;
        }
    }
    cout << ele;
}