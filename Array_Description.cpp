#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long
#define vi vector<int>
#define endl "\n"
#define MOD (1e9 + 7)
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define testcase \
    int _t;      \
    cin >> _t;   \
    while (_t--)
int main() {
    IOS;
    ll n, m;
    cin >> n >> m;
    vector<vi> dp(n + 1, vi(m + 1, 0));
    vi a(n);
    for (int i = 0; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1) {
                if (a[i - 1] == 0 || a[i - 1] == j)
                    dp[i][j] = 1;
                else
                    dp[i][j] = 0;
            } else {
                if (a[i - 1] == 0 || a[i - 1] == j) {
                    dp[i][j] +=
                        dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1];
                    dp[i][j] %= (int)MOD;
                } else
                    dp[i][j] = 0;
            }
        }
    }
    ll res = 0;
    for (int i = 1; i <= m; i++) {
        res += dp[n][i];
        res %= (int)MOD;
    }
    cout << res;
    return 0;
}