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
    ll n;
    cin >> n;
    vi dp(n + 1, MOD);
    dp[0] = 0;
    for (ll i = 0; i < n + 1; i++) {
        for (ll j = i; j > 0; j /= 10) {
            dp[i] = min(dp[i], dp[i - j % 10] + 1);
        }
    }
    cout << dp[n];
    return 0;
}