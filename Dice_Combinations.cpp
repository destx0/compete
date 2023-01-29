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
    deque<ll> q;
    ll t, s;
    cin >> t;
    while (t--) {
        // s = (accumulate(q.begin(), q.end(), 0) + 1);
        // s %= MOD;
        s = 1;
        for (auto i : q) {
            s += i;
            s %= MOD;
        }
        // cout << "s:" << s << "t: " << t << endl;
        if (q.size() == 6) {
            q.push_back(s - 1);
            q.pop_front();
        } else
            q.push_back(s);
    }
    cout << q.back() << endl;
    return 0;
}