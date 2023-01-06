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
    int n, k, temp;
    cin >> n >> k;
    unordered_map<int, int> map;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        if (map.count(k - temp)) {
            cout << map[k - temp] << " " << i;
            return 0;
        } else {
            map[temp] = i;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}