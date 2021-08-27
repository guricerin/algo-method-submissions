#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n;
    cin >> n;
    vector<string> maze(n);
    rep(i, 0, n) cin >> maze[i];
    int dp[n + 10][n + 10];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;

    rep(i, 0, n) rep(j, 0, n)
    {
        if (maze[i][j] == '.')
        {
            if (i - 1 >= 0)
            {
                dp[i][j] += dp[i - 1][j];
            }
            if (j - 1 >= 0)
            {
                dp[i][j] += dp[i][j - 1];
            }
        }
    }

    cout << dp[n - 1][n - 1] << "\n";
}
