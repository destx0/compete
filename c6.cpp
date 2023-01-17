#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    n++;
    vector<bool> a(n, true);
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == false) continue;
        for (int j = i + i; j < n; j += i) {
            a[j] = false;
        }
    }
    for (int i = 2; i < n; i++) {
        if (a[i]) cout << i << " ";
    }
}