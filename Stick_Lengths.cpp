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
    ll n, tot, res = 0, target;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    tot = accumulate(a, a + n, 0);
    // target = (tot % n >= (n / 2)) ? (tot / n) + 1 : (tot / n);
    sort(a, a + n);
    target = a[n / 2];
    for (auto it : a) {
        res += (abs(target - it));
    }
    cout << res << endl;
    return 0;
}