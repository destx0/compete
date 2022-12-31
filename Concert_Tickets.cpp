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
    int n, m, x;
    cin >> n >> m;
    int ma[m];
    multiset<int> ms;
    for (int i = 0; i < n; i++) {
        cin >> x;
        ms.insert(x);
    }
    for (int i = 0; i < m; i++) cin >> ma[i];
    for (int i = 0; i < m; i++) {
        auto it = ms.upper_bound(ma[i]);
        if (it == ms.begin()) {
            cout << -1 << endl;
            continue;
        }
        it = prev(it);
        cout << *it << endl;
        ms.erase(it);
    }
    return 0;
}