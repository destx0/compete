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
    ll n, x, res = 1, check = 0;
    cin >> n;
    int a[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[x] = i;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < check) res++;
        check = a[i];
    }
    cout << res << endl;
    return 0;
}