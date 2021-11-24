#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n;
    cin >> n;
    int as[n][3];
    rep(i, 0, n) rep(j, 0, 3) cin >> as[i][j];
    int dp[n][3];
    memset(dp, 0, sizeof(dp));
    rep(i, 0, 3) dp[0][i] = as[0][i];

    rep(i, 1, n)
    {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + as[i][0];
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + as[i][1];
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + as[i][2];
    }

    cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << "\n";
}
