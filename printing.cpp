#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000000;

bitset<MAXN + 5> isPrime; // bitset to store the sieve

int main()
{
    isPrime.set();               // set all bits to 1
    isPrime[0] = isPrime[1] = 0; // 0 and 1 are not prime

    // Sieve of Eratosthenes
    for (int i = 2; i <= MAXN; i++)
    {
        if (isPrime[i])
        {
            // i is prime, mark all its multiples as non-prime
            for (int j = 2 * i; j <= MAXN; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
    int count = 0;
    // Print the prime numbers
    for (int i = 2; i <= MAXN; i++)
    {
        if (isPrime[i])
        {
            count++;
            if (count % 100 == 1)
            {

                cout << i << "\n";
            }
        }
    }

    return 0;
}