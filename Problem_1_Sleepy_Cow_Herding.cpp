#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define endl "\n"
#define MOD (1000000007)
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define testcase \
    int _t;      \
    cin >> _t;   \
    while (_t--)
int main() {
    IOS;
    vi cows(3);
    cin >> cows[0] >> cows[1] >> cows[2];
    sort(cows.begin(), cows.end());
    if ((cows[0] + 1 == cows[1]) && (cows[1] == cows[2] - 1)) cout << 0;
    else if ((cows[0] + 2 == cows[1]) || (cows[1] == cows[2] - 2)) cout << 1;
    return 0;
}