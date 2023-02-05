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
    ll n, x;
    cin >> n >> x;
    vi c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    vi dp(x + 1, 0);
    vi last(x + 1, -1);
    for (int i = 1; i <= n; i++) {
        for (auto coin : c) {
            if (coin <= i) {
            }
        }
    }
    for (auto it : dp) cout << it << " ";
    cout << dp[x] << endl;
    return 0;
}