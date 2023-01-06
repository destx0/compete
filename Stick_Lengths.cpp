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
    target = (tot % target > target / 2) ? tot / target : tot / target + 1;
    return 0;
}