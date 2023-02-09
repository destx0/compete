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
Class SGTree {
    vector<int> seg;

   public:
    SGTree(int n) { seg.resize(4 * n + 1); }

    void buildS(int ind, int low, int high, int arr[], int seg[]) {
        if (low == high) {
            seg[ind] = arr[low];
            return;
        }
        int mid = (low + high) / 2;
        buildS(2 * ind + 1, low, mid, arr, seg);
        buildS(2 * ind + 2, mid + 1, high, arr, seg);
        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }

    void updateS(int ind, int low, int high, int loc, int val, int seg[]) {
        if (low == high) {
            seg[low] = val;
            return;
        }
        int mid = (low + high) / 2;
        if (loc <= mid)
            updateS(2 * ind + 1, low, mid, loc, val, seg);
        else
            updateS(2 * ind + 2, mid + 1, high, loc, val, seg);
        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }

    int queryS(int ind, int low, int high, int l, int r, int seg[]) {
        // no overlap
        // l r low ,high or low high l r
        if (r < low || l > high) return INT_MAX;

        // complete overlap
        // l  low high  r

        else if (l <= low && r >= high)
            return seg[ind];

        int mid = (low + high) / 2;
        int left = queryS(ind * 2 + 1, low, mid, l, r, seg);
        int right = queryS(ind * 2 + 2, mid + 1, high, l, r, seg);
        return min(left, right);
    }
};

int main() {
    IOS;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int seg[4 * n];
    buildS(0, 0, n - 1, arr, seg);
    testcase {
        int type, l, r;
        cin >> type >> l >> r;
        if (type) {
            cout << queryS(0, 0, n - 1, l, r, seg) << " ";
        }
    }
    return 0;
}