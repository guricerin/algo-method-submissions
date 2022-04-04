#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

vector<bool> sieve_of_eratosthenes(i64 n)
{
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for (i64 p = 2; p <= n; p++)
    {
        if (!sieve[p])
            continue;

        // p以外のpの倍数をふるい落とす
        for (i64 q = p * 2; q <= n; q += p)
        {
            sieve[q] = false;
        }
    }

    return sieve;
}

int main()
{
    int n;
    cin >> n;
    auto sieve = sieve_of_eratosthenes(n);

    int ans = 0;
    rep(i, 0, sieve.size() - 2)
    {
        if (sieve[i] && sieve[i + 2])
            ans++;
    }
    cout << ans << endl;
}
