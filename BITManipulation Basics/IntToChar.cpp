#include <iostream>
using namespace std;
int converter(char a)
{
    return (a - '0'); // subtracts the ascii value
}
int main()
{
    char a = '5';
    int b = converter(a);
    cout << b;
}