#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x, t;
    unordered_set<int> set;
    cin >> t;
    while (t--) {
        cin >> x;
        set.insert(x);
    }

    cout << set.size();
    return 0;
}