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
    int n, m, k, res = 0, j = 0;
    cin >> n >> m >> k;
    int a[n], b[m];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    for (int i = 0; i < n, i < n && j < m;) {
        if ((a[i] + k >= b[j]) && (a[i] - k <= b[j])) {
            res++;
            j++;
            i++;

        } else if (a[i] + k < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    cout << res << endl;
    return 0;
}