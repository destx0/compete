#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, a = 1;
    cin >> n;
    if (n % 4 == 1 || n % 4 == 2)
        cout << "NO" << endl;
    else
    {
        vector<int> v1, v2;
        cout << "YES" << endl;
        if (n % 4 == 3)
        {
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
            a = 4;
        }
        for (; a <= n; a += 4)
        {
            v1.push_back(a);
            v2.push_back(a + 1);
            v2.push_back(a + 2);
            v1.push_back(a + 3);
        }
        cout << v1.size() << "\n";
        for (auto el : v1)
            cout << el << " ";
        cout << "\n"
             << v2.size() << "\n";
        for (auto el : v2)
            cout << el << " ";
    }
    return 0;
}