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

    vector<vector<int>> dp(n + 10, vector<int>(m + 10, -1));
    dp[0][0] = 0;

    rep(i, 0, n - 1) rep(j, 0, m)
    {
        if (dp[i][j] < 0)
            continue;
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);

        int a = as[i];
        int b = bs[i];
        if (j + a < m)
        {
            dp[i + 1][j + a] = max(dp[i + 1][j + a], dp[i][j] + b);
        }
    }

    int ans = dp[n - 1][m - 1] < 0 ? -1 : dp[n - 1][m - 1];
    cout << ans << endl;
}
