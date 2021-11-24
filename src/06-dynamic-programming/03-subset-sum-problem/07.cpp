#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n;
    cin >> n;
    vector<int> ws(n);
    rep(i, 0, n) cin >> ws[i];

    const int m = 50000;
    // i枚のカードを2つのグループに分けたとき、各グループの数値の総和の差がjとなるか
    vector<vector<int>> dp(n + 10, vector<int>(m + 10, 0));
    dp[0][0] = 1;

    rep(i, 0, n) rep(j, 0, m)
    {
        if (!dp[i][j])
            continue;

        int w = ws[i];
        // wを総和の大きい方のグループに追加する場合
        if (j + w < m)
        {
            dp[i + 1][j + w] = 1;
        }

        // wを総和の小さい方のグループに追加する場合
        int k = abs(j - w);
        if (k < m)
        {
            dp[i + 1][k] = 1;
        }
    }

    int ans = 1 << 29;
    rrep(i, m, 0)
    {
        if (dp[n][i])
            ans = i;
    }
    cout << ans << endl;
}
