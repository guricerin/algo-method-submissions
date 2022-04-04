#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

bool is_prime(i64 n)
{
    if (n <= 1)
        return false;
    for (i64 p = 2; p * p <= n; p++)
    {
        if (n % p == 0)
            return false;
    }
    return true;
}

int main()
{
    vector<bool> sieve(101, true);
    sieve[0] = sieve[1] = false;
    for (int p = 2 * 2; p <= 100; p += 2)
    {
        sieve[p] = false;
    }
    for (int p = 3 * 2; p <= 100; p += 3)
    {
        sieve[p] = false;
    }
    for (int p = 5 * 2; p <= 100; p += 5)
    {
        sieve[p] = false;
    }

    int ans = 0;
    rep(i, 2, 101)
    {
        if (sieve[i] && !is_prime(i))
        {
            ans++;
        }
    }
    cout << ans << endl;
}
