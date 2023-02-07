#include <iostream>
#include <queue>
using namespace std;
#include <functional>

int main()
{
    int arr[] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int sum = 0;

    priority_queue<int, vector<int>, greater<int>> heap;

    for (int x : arr)
    {
        heap.push(x);
    }

    while (heap.size() > 1)
    {
        int a, b, c;

        a = heap.top();
        cout << a << " ";
        heap.pop();

        b = heap.top();
        cout << b << " ";
        heap.pop();
        c = (a + b);
        sum += (c);
        cout << sum << " ";
        heap.push(c);

        cout << heap.size() << endl;
    }
    cout << sum;
    return 0;
}