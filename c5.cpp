#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t, x, l, r;
    cin >> n >> t;
    n++;
    vector<int> a(n);
    a[0] = 0;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (i > 0) a[i] = x + a[i - 1];
    }

    while (t--) {
        cin >> l >> r;
        cout << a[r] - a[l - 1] << " ";
    }
}