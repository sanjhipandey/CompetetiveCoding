#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

class Myclass
{

public:
    int sum(int a, int b)
    {
        return (a + b);
    }
    array<int, 6> arr = {1, 2, 3, 7, 5, 6};
};

int main()
{
    Myclass m1;

    cout << "hello world!";
    int n = 10;
    cout << n << endl;
    cout << m1.sum(2, 4) << endl;
    cout << m1.arr.size() << endl;
    sort(m1.arr.begin(), m1.arr.end());
    for (int i = 0; i < 6; i++)
    {
        cout << m1.arr[i];
    }
    return 0;
}
