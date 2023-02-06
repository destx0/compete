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
    ll b, n;
    cin >> b >> n;
    vi pages(b), price(b);
    vi dp(n + 1, -1);
    dp[0] = 0;
    for (auto &it : price) cin >> it;
    for (auto &it : pages) cin >> it;
    int res = 0;
    for (ll i = 0; i < b; i++) {
        for (ll j = n; j >= price[i]; j--) {
            if (dp[j - price[i]] != -1) {
                dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);
                res = max(res, dp[j]);
            }
        }
    }
    // cout << "dp";
    // for (ll i = 0; i <= n; i++) cout << i << "-" << dp[i] << " ";
    cout << res;
    return 0;
}