#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

bool is_prime(i64 n)
{
    if (n < 2)
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
    i64 n;
    cin >> n;
    cout << (is_prime(n) ? "Yes" : "No") << endl;
}
