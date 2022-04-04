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
    int inf = numeric_limits<int>::max() - 100;
    rep(i, 0, n + 10)
    {
        rep(j, 0, m + 10)
        {
            dp[i][j] = inf;
        }
    }
    dp[0][0] = 0;

    rep(i, 0, n)
    {
        rep(j, 0, m + 1)
        {
            int ai = as[i];
            if (j - ai >= 0)
            {
                dp[i + 1][j] = min(dp[i][j], dp[i][j - ai] + 1);
            }
            else
            {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    int ans = dp[n - 1][m] == inf ? -1 : dp[n - 1][m];
    cout << ans << "\n";
}
