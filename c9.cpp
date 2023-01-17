#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    // for (int i = 0; i < n; i++) cin >> v[i];
    for (auto &it : v) cin >> it;
    for (int i = 0; i < n; i++) {
        int r = i;
        while (r > 0 && v[r - 1] > v[r]) {
            swap(v[r - 1], v[r]);
            r--;
        }
    }

    for (auto it : v) cout << it << " ";
}