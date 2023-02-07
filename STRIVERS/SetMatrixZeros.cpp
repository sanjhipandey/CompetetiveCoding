#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<vector<int>> vect{
        {1, 2, 3}, {3, 0, 5}, {6, 7, 8}};

    vector<int> row={1};
    vector<int> column;

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {

            if (vect[i][j] == 0)
            {
                // cout << "yes";
                row[i] = 0;
                b[j] = 0;
            }
        }
    }

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            vect[a][j] = 0;
            vect[i][b] = 0;
        }
    }

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {

            cout << vect[i][j];
        }
        cout << endl;
    }

    return 0;
}
