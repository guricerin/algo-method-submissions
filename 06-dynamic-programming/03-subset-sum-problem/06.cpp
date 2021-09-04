#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> xs(n);
    rep(i, 0, n) cin >> xs[i];

    vector<vector<int>> dp(n + 10, vector<int>(a + 10, 0));
    dp[0][0] = 1;

    rep(i, 0, n) rep(j, 0, a + 1)
    {
        if (!dp[i][j])
            continue;
        dp[i + 1][j] = 1;
        int x = xs[i];
        int v = (j + x) % a;
        dp[i + 1][v] = 1;
    }

    cout << (dp[n][b] ? "Yes" : "No") << endl;
    // rep(i, 0, n + 1) rep(j, 0, a + 1)
    // {
    //     cout << dp[i][j] << " ";
    //     if (j == a)
    //         cout << endl;
    // }
}
