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
    int pth[n][n];
    char grid[n];
    for (ll i = 0; i < n; i++) {
        cin >> grid;
        for (ll j = 0; j < n; j++) pth[i][j] = grid[j] == '.' ? 1 : 0;
    }
    for (ll i = 1; i < n; i++) {
        pth[0][i] *= pth[0][i - 1];
        pth[i][0] *= pth[i - 1][0];
    }
    for (ll i = 1; i < n; i++) {
        for (ll j = 1; j < n; j++) {
            pth[i][j] *= (pth[i - 1][j] + pth[i][j - 1]) % MOD;
        }
    }
    // for (ll i = 0; i < n; i++) {
    //     for (ll j = 0; j < n; j++) cout << pth[i][j];
    //     cout << endl;
    // }
    cout << pth[n - 1][n - 1];
    return 0;
}