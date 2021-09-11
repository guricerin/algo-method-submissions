#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

double dist(int x1, int y1, int x2, int y2)
{
    int x = x1 - x2, y = y1 - y2;
    return sqrt(x * x + y * y);
}

int main()
{
    int n;
    cin >> n;
    vector<int> xs(n), ys(n), seen(n, 0);
    rep(i, 0, n) cin >> xs[i] >> ys[i];

    int curx = xs[0], cury = ys[0], curp = 0;
    seen[0] = true;
    double ans = 0;
    while (1)
    {
        bool allseen = all_of(all(seen), [](int s)
                              { return s == 1; });
        if (allseen)
            break;

        double cand = 1 << 29;
        rep(i, 0, n)
        {
            if (seen[i])
                continue;

            double tmp = dist(curx, cury, xs[i], ys[i]);
            if (tmp < cand)
            {
                cand = tmp;
                curp = i;
            }
        }

        ans += cand;
        seen[curp] = 1;
        curx = xs[curp];
        cury = ys[curp];
    }

    ans += dist(xs[0], ys[0], xs[curp], ys[curp]);
    cout << ans << endl;
}
