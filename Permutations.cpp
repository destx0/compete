#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, a, b;
    cin >> n;
    a = n;
    b = a - 1;
    if (1 < n && n <= 3)
        cout << "NO SOLUTION";
    else {
        while (n > 0) {
            if (b > 0) {
                cout << b << " ";
                b -= 2;
            }

            else {
                cout << a << " ";
                a -= 2;
            }
            n--;
        }
    }
    return 0;
}