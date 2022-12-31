#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i = 100;

    while (i--)
    {
        if (((i * (i + 1)) / 2) % 2 == 0)
        {
            cout << i << "  ";
        }
    }
    return 0;
}