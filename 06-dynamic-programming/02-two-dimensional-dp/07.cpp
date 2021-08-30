#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n;
    cin >> n;
    int as[n][n];
    rep(i, 0, n) rep(j, 0, n) cin >> as[i][j];
    int dp[n + 10][n + 10];
    memset(dp, 0, sizeof(dp));

    rep(i, 0, n) rrep(j, n - 1, 0)
    {
        if (i - 1 >= 0 && j + 1 < n)
        {
            dp[i][j] += min(dp[i - 1][j], dp[i][j + 1]);
        }
        else if (i - 1 >= 0)
        {
            dp[i][j] += dp[i - 1][j];
        }
        else if (j + 1 < n)
        {
            dp[i][j] += dp[i][j + 1];
        }
        dp[i][j] += as[i][j];
    }

    cout << dp[n - 1][0] << endl;
}
