#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> ws(n), vs(n);
    rep(i, 0, n) cin >> ws[i] >> vs[i];

    vector<vector<int>> dp(n + 1, vector<int>(w + 1));
    dp[0][0] = 0;
    rep(i, 0, n)
    {
        int wi = ws[i];
        int vi = vs[i];
        rep(j, 0, w + 1)
        {
            if (j - wi >= 0)
            {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - wi] + vi);
            }
            else
            {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }
    cout << dp[n][w] << "\n";
}
