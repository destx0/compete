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
    int n, w, t;
    cin >> n >> w;
    t = n;
    int ws[n];
    while (t--) cin >> ws[t];
    sort(ws, ws + n);
    int l = 0, r = n - 1, res = 0;
    while (l < r) {
        if (ws[l] + ws[r] <= w) l++;
        r--;
        res++;
    }
    if (l == r) res++;
    cout << res;
    return 0;
}