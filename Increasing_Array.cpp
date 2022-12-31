#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, a, b, res = 0;
    cin >> n >> a;
    for (int i = 1; i < n; i++)
    {
        cin >> b;
        res += max((a - b), 0LL);
        a = max(b, a);
    }
    cout << res;
    return 0;
}