#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  vector<int> v;
  for (size_t i = 0; i < 100; i++) {
    v.push_back(i + 1);
  }

  int arr[3] = {1, 2, 3};
  for (auto el : arr) cout << el << "\t";
  return 0;
}