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
    ll n, term, j = 0, minv = -1 * MOD, res = -1 * MOD, prev = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> term;
        prev += term;
        prev = max(term, prev);
        res = max(prev, res);
    }
    cout << res << endl;
    return 0;
}