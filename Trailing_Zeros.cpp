#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, res = 0;
    cin >> n;
    while(n){
        res += (n/5);
        n /= 5;
    }
    cout << res << endl;
    return 0;
}