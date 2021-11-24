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
    rep(i, 0, n - 1) cin >> as[i];

    int dp[n + 10][m + 10];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;

    rep(i, 0, n - 1) rep(j, 0, m)
    {
        if (dp[i][j] == 0)
            continue;

        dp[i + 1][j] = 1;
        int a = as[i];
        if (j + a < m)
        {
            dp[i + 1][j + a] = 1;
        }
    }

    int ans = 0;
    rep(i, 0, m)
    {
        ans += dp[n - 1][i];
    }
    cout << ans << endl;
}
