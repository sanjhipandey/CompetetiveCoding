#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int maxPro = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i] - minPrice);
    }
    cout << maxPro;
}