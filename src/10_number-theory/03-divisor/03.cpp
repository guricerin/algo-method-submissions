#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

vector<i64> divisors(i64 n)
{
    vector<i64> res;
    for (i64 i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res.push_back(i);
            if (i * i != n)
            {
                res.push_back(n / i);
            }
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main()
{
    i64 n;
    cin >> n;
    auto d = divisors(n);
    i64 p = 0;
    rep(i, 0, d.size() - 1)
    {
        p += d[i];
    }
    cout << (p == n ? "Yes" : "No") << endl;
}
