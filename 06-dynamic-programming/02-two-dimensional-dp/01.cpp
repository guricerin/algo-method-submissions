#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int dp[4][4];
    memset(dp, 0, sizeof(dp));
    rep(i, 0, 4) cin >> dp[0][i];

    rep(i, 1, 4)
    {
        rep(j, 0, 4)
        {
            if (i - 1 >= 0)
            {
                if (j - 1 >= 0 && j - 1 < 4)
                    dp[i][j] += dp[i - 1][j - 1];
                if (j >= 0 && j < 4)
                    dp[i][j] += dp[i - 1][j];
                if (j + 1 >= 0 && j + 1 < 4)
                    dp[i][j] += dp[i - 1][j + 1];
            }
        }
    }

    cout << dp[3][3] << "\n";
}
