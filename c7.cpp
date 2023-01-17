#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, small, idx;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) {
        small = i;
        for (int j = i + 1; j < n; j++) {
            if (v[small] > v[j]) small = j;
        }
        swap(v[small], v[i]);
    }
    for (int i = 0; i < n; i++) cout << v[i] << " ";
}