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
    ll c, t;
    cin >> c >> t;
    vector<ll> coin(c), dp(t + 1, 0);
    for (ll i = 0; i < c; i++) cin >> coin[i];
    dp[0] = 1;
    for (ll i = 0; i < c; i++) {
        for (ll j = coin[i]; j <= t; j++) {
            dp[j] += dp[j - coin[i]];
            dp[j] %= MOD;
        }
    }
    cout << dp[t] << endl;
    return 0;
}