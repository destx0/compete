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
    int n, t;
    cin >> n;
    t = n;
    pair<int, int> a[n];
    while (t--) {
        cin >> a[t].second >> a[t].first;
    }
    sort(a, a + n);
    int res = 0, last = -1;
    for (int i = 0; i < n; i++) {
        if (a[i].second >= last) {
            res++;
            last = a[i].first;
        }
    }
    cout << res << endl;

    return 0;
}