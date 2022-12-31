#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
int main() {
    IOS;
    string s, r;
    vector<int> v(26, 0);
    cin >> s;
    int f = 0, j = 0;
    for (auto it : s) v[it - 'A']++;
    for (auto it : v) {
        if (it % 2 == 1) f++;
    }
    if (f > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for (int i = 0; i < 26; i++) {
        if (v[i] % 2 == 1) s[(s.size()) / 2] = 'A' + i;
        while (v[i] > 1) {
            s[j] = 'A' + i;
            s[s.size() - j - 1] = 'A' + i;
            v[i] -= 2;
            j++;
        }
    }
    cout << s << endl;

    return 0;
}