#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    string s, t;
    cin >> s >> t;
    const int n = s.size(), m = t.size();
    vector<vector<int>> dp(n + 10, vector<int>(m + 10, 0));

    rep(i, 0, n) rep(j, 0, m)
    {
        dp[i + 1][j + 1] = max({dp[i + 1][j + 1], dp[i + 1][j], dp[i][j + 1]});
        if (s[i] == t[j])
        {
            dp[i + 1][j + 1] = max({dp[i + 1][j + 1], dp[i][j] + 1});
        }
    }

    cout << dp[n][m] << endl;
}
