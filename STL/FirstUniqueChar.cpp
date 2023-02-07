#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string s = "abbcaddeffecghhii";
    unordered_map<char, int> cnt;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        cnt[s[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (cnt[s[i]] == 1)
        {
            cout << i;
        }
    }
}
