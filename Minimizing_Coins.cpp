#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define endl "\n"
#define MOD (1000000007)
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
    ll t, n;
    cin >> t >> n;
    ll a[t];
    ll tmp;
    for (int i = 0; i < t; i++) cin >> a[i];
    // ll dp[n + 1]{-1};
    vector<ll> dp(n + 1, -1);
    dp[0] = 0;
    // for (auto iy : dp) cout << iy << " ";
    for (int i = 1; i <= n; i++) {
        tmp = INT_MAX;
        for (auto it : a) {
            if (it <= i and dp[i - it] != -1) {
                tmp = min(tmp, dp[i - it]);
            }
        }
        if (tmp != INT_MAX) dp[i] = tmp + 1;
    }
    // for (auto iy : dp) cout << iy << " ";
    cout << dp[n] << endl;
    return 0;
}