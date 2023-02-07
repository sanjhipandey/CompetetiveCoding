#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ans = 0;
    vector<vector<int>> grid = {{1, 0, 1}, {0, 0, 1}, {1, 1, 0}};
    int n = grid.size(), m = grid[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    cout << ans;
}