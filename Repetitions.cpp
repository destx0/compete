#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    cin >> str;
    long long h = 1, c = 1;
    for (size_t i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
        {
            c++;
            h = max(h, c);
        }
        else
        {
            c = 1;
        }
    }

    cout << h;
    return 0;
}