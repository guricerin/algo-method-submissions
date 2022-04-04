#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n;
    cin >> n;
    vector<i64> xs(n);
    rep(i, 0, n) cin >> xs[i];

    rep(i, 0, n)
    {
        i64 a0 = 0;
        i64 ok = 1e10, ng = -1;
        while (abs(ok - ng) > 1)
        {
            i64 mid = (ok + ng) / 2;
            // 貯金額は階差数列
            i64 an = a0 + (mid * (mid + 1)) / 2;
            if (xs[i] <= an)
                ok = mid;
            else
                ng = mid;
        }
        cout << ok << endl;
    }
}
