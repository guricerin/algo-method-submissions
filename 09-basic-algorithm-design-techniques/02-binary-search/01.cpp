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

    auto isok = [&n](double x)
    {
        auto y = x * (x * (x + 1) + 2) + 3;
        return y >= n;
    };

    double ng = -1, ok = 101;
    while (abs(ok - ng) > 0.01)
    {
        double mid = (ok + ng) / 2.0;
        if (isok(mid))
            ok = mid;
        else
            ng = mid;
    }

    cout << ok << endl;
}
