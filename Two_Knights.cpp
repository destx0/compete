#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, i;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cout << ((i * i) * (i * i - 1) / 2) - ((i - 1) * ((i - 2)) * 4) << "\n";
    }

    return 0;
}