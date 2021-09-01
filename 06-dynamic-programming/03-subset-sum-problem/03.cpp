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
    vector<int> as(n - 1), bs(n - 1);
    rep(i, 0, n - 1) cin >> as[i];
    rep(i, 0, n - 1) cin >> bs[i];

    int dp[n + 10][m + 10];
    memset(dp, 0, sizeof(dp));
    int seen[n + 10][m + 10];
    memset(seen, 0, sizeof(seen));
    seen[0][0] = 1;

    rep(i, 0, n - 1) rep(j, 0, m)
    {
        seen[i + 1][j] |= seen[i][j];
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
        if (i >= n - 1)
            continue;

        int a = as[i], b = bs[i];
        if (j + a < m)
            seen[i + 1][j + a] |= seen[i][j];
        if (j - a >= 0 && seen[i][j - a])
        {
            dp[i + 1][j] = max(dp[i + 1][j], b + dp[i][j - a]);
        }
    }

    int ans = seen[n - 1][m - 1] ? dp[n - 1][m - 1] : -1;
    cout << ans << endl;
}
