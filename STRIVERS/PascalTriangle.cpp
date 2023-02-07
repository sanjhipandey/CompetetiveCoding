#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 4;
    int s = 0;
    vector<vector<int>> vect(4);
    // vector<int> v;
    // v.push_back(1);
    // vect.push_back(v);
    // int p = 2;
    // for (int i = 1; i < p; i++)
    // {
    //     while (p <= n)
    //     {
    //         p++;
    //     }
    //     for (int j = 0; j <= i; j++)
    //     {
    //         v.push_back(vect[i - 1][0]);
    //         cout << vect[i - 1][0] << " ";
    //         for (int k = 1; k < (i - 1); k++)
    //         {
    //             cout << (vect[i - 1][j] + vect[i - 1][j + 1]) << " ";
    //             v.push_back(vect[i - 1][j] + vect[i - 1][j + 1]);
    //         }
    //         v.push_back(vect[i - 1][0]);
    //     }
    //     cout << endl;
    //     vect.push_back(v);
    // }
    int k = 1;

    for (int i = 0; i < n; i++)
    {
        vect[0].resize(i + 1);
        vect[i][0] = vect[i][i] = 1;
        for (int j = 0; j < i; j++)
        {
            vect[i][j] = vect[i - 1][j - 1] + vect[i - 1][j];
        }
    }

    for (int i = 0; i < k; i++)
    {
        while (k <= n)
        {
            k++;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << vect[i][j];
        }
        cout << endl;
    }
}