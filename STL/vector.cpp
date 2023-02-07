#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> days{1, 2};
    vector<int>::iterator i;
    days.reserve(3);
    days.push_back(3);
    for (int i = 0; i < days.size(); i++)
    {
        cout << days[i];
    }
    cout << endl;
    i = days.end();
    cout << *(i - 1);
    days.push_back(5);
    days.push_back(6);
    days.push_back(7);
    days.push_back(6); // doubling of capacity happens 3->6->12, therefore reserve memory space

    cout << days.capacity();
    return 0;
}