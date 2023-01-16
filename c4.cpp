#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    int l = 0, r = 0;
    while (l < n && r < m) {
        if (b[r] < a[l]) {
            cout << b[r] << " ";
            r++;
        } else {
            cout << a[l] << " ";
            l++;
        }
    }
    while (l < n) {
        cout << a[l] << " ";
        l++;
    }
    while (r < m) {
        cout << b[r] << " ";
        r++;
    }
}
