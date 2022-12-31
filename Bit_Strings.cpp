#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (1000000007ll)

ll bunpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, out;
    cin >> n;
    out = bunpow(2, n);
    cout << out;

    return 0;
}