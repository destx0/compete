#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t, a, b, c;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        if (b > a) swap(a, b);
        c = a - b;
        a = a - 2 * c;
        b = b - c;
        if (a == b && a >= 0 && a % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}