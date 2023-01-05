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

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second == p2.second)
        return p1.first <= p2.second;
    else
        return p1.second < p2.second;
}
int main() {
    IOS;
    int n, t, res = 0, i = 0, j = 0;
    cin >> n;
    t = n;
    pair<int, int> p;
    vector<pair<int, int> > v;
    while (t--) {
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    sort(v.begin(), v.end(), comp);

    while (i < n) {
        j = i + 1;
        while (j < n && v[j].first < v[i].second) j++;
        res++;
        i = j;
    }
    cout << res << endl;

    return 0;
}