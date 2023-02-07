#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 19}, {23, 30, 34, 60}};
    int t = 16;
    int m = matrix.size();
    int n = matrix[0].size();

    int low = 0;
    int high = (m * n - 1);
    int mid = (low + high) / 2;
    while (low <= high)
    {

        if (t == matrix[mid / n][mid % n])
        {

            cout << "true";
            break;
        }
        else if (t < matrix[mid / m][mid % n])
        {

            high = (mid - 1);
            mid = (low + (high)) / 2;
        }
        else
        {
            low = (mid + 1);
            mid = (low + (high)) / 2;
        }
    }
}