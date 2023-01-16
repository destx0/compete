#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    while (t--) {
        int l, r;
        cin >> l >> r;
        for (int i = l - 1, j = r - 1; i < j; i++, j--) {
            swap(a[i], a[j]);
        }
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
