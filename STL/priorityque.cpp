#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int arr[] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    priority_queue<int> heap;

    for (int x : arr)
    {
        heap.push(x);
    }
    int i = 0;

    // while (!heap.empty())
    // {
    //     cout << heap.top() << endl;
    //     heap.pop();
    // }

    while (i != 3)
    {
        heap.pop();

        cout << i;
        cout << heap.top() << endl;
        i++;
    }

    return 0;
}