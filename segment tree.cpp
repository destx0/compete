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

class SGTree {
    vector<int> seg;

   public:
    SGTree(int n) { seg.resize(4 * n + 1); }
    void build(int node, int start, int end, vi &arr) {
        if (start == end) {
            seg[node] = arr[start];
            return;
        }
        int mid = (start + end) / 2;
        build(2 * node, start, mid, arr);
        build(2 * node + 1, mid + 1, end, arr);
        seg[node] = seg[2 * node] + seg[2 * node + 1];
    }

    void update(int node, int start, int end, int idx, int val, vi &arr) {
        if (start == end) {
            arr[idx] = val;
            seg[node] = val;
            return;
        }
        int mid = (start + end) / 2;
        if (idx <= mid)
            update(2 * node, start, mid, idx, val, arr);
        else
            update(2 * node + 1, mid + 1, end, idx, val, arr);
        seg[node] = seg[2 * node] + seg[2 * node + 1];
    }

    int query(int node, int start, int end, int l, int r) {
        if (r < start || l > end) return 0;
        if (l <= start && r >= end) return seg[node];
        int mid = (start + end) / 2;
        int left = query(2 * node, start, mid, l, r);
        int right = query(2 * node + 1, mid + 1, end, l, r);
        return left + right;
    }
};

int main() {
    IOS;
    int n, q;
    cin >> n >> q;
    vi arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    SGTree sg(n);
    sg.build(1, 0, n - 1, arr);
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int idx, val;
            cin >> idx >> val;
            sg.update(1, 0, n - 1, idx, val, arr);
        } else {
            int l, r;
            cin >> l >> r;
            cout << sg.query(1, 0, n - 1, l, r) << endl;
        }
    }

    return 0;
}