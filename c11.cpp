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
    string s, t;
    cin >> s >> t;
    int i = 0;
    for (auto it : s) {
        for (i; i < t.length(); i++) {
            if (s == t) {
                i++;
                break;
            }
        }
    }

    return 0;
}