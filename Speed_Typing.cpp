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
    int c = 1;
    testcase {
        string s, t;
        cin >> s >> t;
        int p = 0, res = 0, f = 1;
        for (auto ch : s) {
            if (p == t.size()) {
                // cout << p << ch;
                cout << "Case #" << c << ": "
                     << "IMPOSSIBLE" << endl;
                c++;
                f = 0;
                break;
            }
            while (t[p] != ch) {
                // cout << p;
                p++;
                res++;
                if (p == t.size()) {
                    // cout << p << ch;
                    cout << "Case #" << c << ": "
                         << "IMPOSSIBLE" << endl;
                    c++;
                    f = 0;
                    break;
                }
            }
            if (f == 0) break;
            // cout << p;
            if (p == t.size()) {
                // cout << p << ch;
                cout << "Case #" << c << ": "
                     << "IMPOSSIBLE" << endl;
                c++;
                f = 0;
                break;
            }
            p++;
        }
        if (f) {
            cout << "Case #" << c << ": " << t.size() - s.size() << endl;
            c++;
        }
    }

    return 0;
}