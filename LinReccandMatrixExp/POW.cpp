#include <iostream>
using namespace std;
int main()
{
    int A = 2;
    int B = 2;
    int C = 4;

    int res = 1, ress = 1;
    string c;
    while (C)
    {
        if (C & 1 == 1)
        {
            res *= A;
            ress *= B;
        }
        A *= A;
        B *= B;
        C = C / 2;
    }

    cout << res << " " << ress << endl;
    if (res > ress)
    {
        cout << ">";
    }
    else if (res < ress)
    {
        cout << "<";
    }
    else
    {
        cout << "=";
    }
}
