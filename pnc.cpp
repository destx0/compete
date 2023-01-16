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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    ll tot = accumulate(a, a + n, 0);
    ll smple = tot * (tot - 1) / 2;
    ll res = 0;
    for (int i = 0; i < n; i++) {
        res += a[i] * (a[i] - 1) / 2;
    }
    cout << smple - res << endl;
}