#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n, m;
    cin >> n >> m;

    auto f = [&n, &m](double x)
    {
        double y = x * (x * (x * (x * (x * (n + 1) + 1) + 1) + 1) + 1) + 1;
        return y >= m;
    };
    double ng = 0, ok = 1e29;
    while (abs(ok - ng) > 0.01)
    {
        double mid = (ok + ng) / 2.0;
        if (f(mid))
            ok = mid;
        else
            ng = mid;
    }

    cout << setprecision(10) << ok << endl;
}
