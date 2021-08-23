#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    int dp[110][10010];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;

    rep(i, 0, n)
    {
        rep(j, 0, m + 1)
        {
            int ai = as[i];
            if (j - ai >= 0)
            {
                dp[i + 1][j] = (dp[i][j] + dp[i][j - ai]) % 1000;
            }
            else
            {
                dp[i + 1][j] = dp[i][j] % 1000;
            }
        }
    }

    cout << dp[n][m] << "\n";
}
