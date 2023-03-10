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
    vector<ll> coins(c);
    for (auto &it : coins) cin >> it;
    // for (auto it : coins) cout << it << " ";
    // auto highest = *max_element(coins.begin(), coins.end());
    // cout << highest << endl;

    vector<ll> dp(t + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= t; i++) {
        for (auto it : coins) {
            if (it <= i) {
                dp[i] += dp[i - it];
                dp[i] %= MOD;
            }
        }
    }
    // for (auto it : dp) cout << it << " ";
    cout << dp[t] << endl;
    return 0;
}