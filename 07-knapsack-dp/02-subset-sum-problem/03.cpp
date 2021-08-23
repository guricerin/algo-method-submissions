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

    bool dp[110][10010];
    dp[0][0] = true;
    rep(i, 1, m + 1) dp[0][i] = false;
    rep(i, 0, n)
    {
        int ai = as[i];
        rep(j, 0, m + 1)
        {
            if (j - ai >= 0)
            {
                dp[i + 1][j] = dp[i][j] | dp[i][j - ai];
            }
            else
            {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    if (dp[n][m])
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
