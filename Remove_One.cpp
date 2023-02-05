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
    testcase {
        ll n, w, s, tot, f = 0;
        cin >> n >> w >> s;

        tot = (w + 1) * (w + 2) / 2;
        ll l = 1, r = n - w;
        while (l <= r) {
            ll need = tot - s;
            // cout << "l" << l << "nned" << need << endl;
            if (need > 0 && need >= l && need <= l + w) {
                cout << "YES" << endl;
                f = 1;
                break;
            }
            l++;
            tot += w + 1;
        }
        if (!f) cout << "NO" << endl;
    }
    return 0;
}