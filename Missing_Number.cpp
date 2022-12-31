#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
    long long n, a, sum = 0;
    cin >> n;
    for (auto i = 0; i < n - 1; i++)
    {

        cin >> a;
        sum += a;
    }

    cout << (n * (n + 1)) / 2 - sum;
    return 0;
}