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
    vector<int> ws(n);
    rep(i, 0, n) cin >> ws[i];

    int dp[n + 10][m + 10];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;

    rep(i, 0, n) rep(j, 0, m + 1)
    {
        dp[i + 1][j] |= dp[i][j];
        int w = ws[i];
        if (j - w >= 0)
        {
            dp[i + 1][j] |= dp[i][j - w];
        }
    }

    cout << (dp[n][m] ? "Yes" : "No") << endl;
}
