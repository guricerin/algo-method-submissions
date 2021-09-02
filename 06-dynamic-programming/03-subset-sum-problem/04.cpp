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
    vector<int> ws(n), vs(n);
    rep(i, 0, n) cin >> ws[i];
    rep(i, 0, n) cin >> vs[i];

    vector<vector<int>> dp(n + 10, vector<int>(m + 10, 0));

    rep(i, 0, n) rep(j, 0, m + 1)
    {
        int w = ws[i];
        int v = vs[i];
        if (j - w >= 0)
        {
            dp[i + 1][j] = max(dp[i][j], dp[i][j - w] + v);
        }
        else
        {
            dp[i + 1][j] = dp[i][j];
        }
    }

    cout << dp[n][m] << endl;
    // rep(i, 0, n + 1) rep(j, 0, m + 1)
    // {
    //     cout << dp[i][j] << " ";
    //     if (j == m)
    //         cout << endl;
    // }
}
