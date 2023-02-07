#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int n = prices.size();
    int prof = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = (i); j < n; j++)
        {
            if (prices[i] < prices[j])
            {
                int p = 0;
                p = prices[j] - prices[i];
                cout << "(" << prices[j] << "-" << prices[i] << ")"
                     << "=" << p << endl;
                if (p > prof)
                {
                    prof = p;
                }
            }
        }
    }
    cout << prof;
}