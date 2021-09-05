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

    // 約数がちょうど3個
    // -> 素数を二乗した数値
    // √nまでの素数の個数を求める
    const double eps = 1e-9;
    int sq = (int)(sqrt(n) + eps);
    auto sieve = sieve_of_eratosthenes(sq);
    int pnum = 0;
    for (auto b : sieve)
    {
        if (b)
            pnum++;
    }

    cout << pnum << endl;
}
