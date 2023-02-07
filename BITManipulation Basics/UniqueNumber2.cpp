#include <iostream>
#include <vector>
using namespace std;

int uniqueNo2(vector<int> arr)
{
    int n = arr.size();

    // XOR
    int result = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        result = result ^ arr[i];
    }

    int pos = 0;
    int temp = result;
    while ((temp & 1) == 0)
    {
        pos++;
        temp = temp >> 1;
    }

    int setA = 0;
    int setB = 0;
    int mask = (1 << pos);

    for (int i = 0; i < arr.size(); i++)
    {
        if ((arr[i] & mask) > 0)
        {
            setA = setA ^ arr[i];
        }
        else
        {
            setB = setB ^ arr[i];
        }
    }
    cout << setA << endl;
    cout << setB << endl;
}

int main()
{
    vector<int> arr = {1, 3, 5, 4, 3, 1, 5, 7};
    cout << uniqueNo2(arr) << endl;
}