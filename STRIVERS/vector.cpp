#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> vect;
    vector<int> v;
    v.push_back(0);
    vect.push_back(v);
    cout << vect[0][0];
}