#include <bits/stdc++.h>
using namespace std;
#define ll long long
void check_factor(ll n) {
    ll i = 2;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) cout << n << " ";
}
int main() {
    ll n;
    cin >> n;
    check_factor(n);
    return 0;
}
