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
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    int inf = 1 << 29;
    vector<vector<int>> dp(n + 10, vector<int>(m + 10, inf));
    dp[0][0] = 0;

    rep(i, 0, n) rep(j, 0, m + 1)
    {
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
        int a = as[i];
        if (j - a >= 0)
        {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - a] + 1);
        }
    }

    int ans = dp[n][m] == inf ? -1 : dp[n][m];
    cout << ans << endl;
    // rep(i, 0, n + 1) rep(j, 0, m + 1)
    // {
    //     cout << (dp[i][j] == inf ? -1 : dp[i][j]) << " ";
    //     if (j == m)
    //         cout << endl;
    // }
}
