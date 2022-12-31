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

    int n = 4;
    // cin >> n;
    for (int i = 0; i < (1 << n); i++) {
        int j = i >> 1;
        int val = i ^ (i >> 1);
        bitset<4> b(val);
        string s = b.to_string();
        // cout << s.substr(32 - n, n) << "  ";
    }
    return 0;
}