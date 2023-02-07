#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int tsp(vector<vector<int>> dist, int setOfCities, int city, int n)
{
    if (setOfCities == (1 << n) - 1)
    {
        // return the cost from the city to the original
        return dist[city][0];
    }

    // otherwise try all possible options

    for (int choice = 0; choice < n; choice++)
    {
        // need to check if city is visited or not
        if (setOfCities & (1 << choice) == 0)
        {
            int subProb = dist[city][choice] + tsp(dist, setOfCities | (1 << choice), )
        }
    }
}

int main()
{
    vector<vector<int>> dist = {
        {0, 20, 42, 25},
        {20, 0, 30, 34},
        {42, 30, 0, 10},
        {25, 34, 10, 0}};
    return 0;
}