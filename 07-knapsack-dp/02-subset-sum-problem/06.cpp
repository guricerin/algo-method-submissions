#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    const int inf = 1 << 29;
    vector<vector<int>> dp(n + 10, vector<int>(m + 10, inf));
    dp[0][0] = 0;

    rep(i, 0, n) rep(j, 0, m + 1)
    {
        if (dp[i][j] == inf)
            continue;

        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
        int a = as[i];
        if (j + a <= m)
        {
            dp[i + 1][j + a] = min(dp[i + 1][j + a], dp[i][j] + 1);
        }
    }

    cout << (dp[n][m] <= k ? "Yes" : "No") << endl;
}
