#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> arr, int l, int r, int mid) {
    vector<int> l1, r1;
    copy(arr.begin() + l, arr.begin() + mid + 1, l1.begin());
    copy(arr.begin() + mid + 1, arr.begin() + r + 1, r1.begin());
}
void merge_sort(vector<int> arr, int l, int r) {
    if (l == r) return;
    int mid = (l + r) / 2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    merge(arr, l, r, mid);
}
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (auto &it : v) cin >> it;
    merge_sort(v, 0, n - 1);
}