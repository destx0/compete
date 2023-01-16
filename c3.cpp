#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[(i + t) % n];
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}