#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t, x, y, m;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;

        if (((max(x, y) % 2 == 0) && x <= y) || (max(x, y) % 2 == 1) && x >= y)
        {
            cout << (max(x, y) - 1) * (max(x, y) - 1) + min(x, y) << "\n";
        }
        else
        {
            cout << (max(x, y)) * (max(x, y)) - min(x, y) + 1 << "\n";
        }
    }
    return 0;
}