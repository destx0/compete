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
    int in[n], out[n];
    for (int i = 0; i < n; i++) cin >> in[i] >> out[i];
    sort(in, in + n);
    sort(out, out + n);
    int l = 0, r = 0, res = 0, pop = 0;

    while (l < n && r < n) {
        if (in[l] < out[r]) {
            pop++;
            l++;
            res = max(res, pop);
        } else if (in[l] > out[r]) {
            pop--;
            r++;
        } else {
            l++;
            r++;
        }
    }
    cout << res << endl;
    return 0;
}