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
    vector<int> dp(n + 1);
    rep(i, 0, n + 1) dp[i] = numeric_limits<int>::max();
    dp[0] = 0;
    rep(i, 1, n + 1)
    {
        rep(j, 1, m + 1)
        {
            if (i - j < 0)
                break;
            dp[i] = min(dp[i], dp[i - j] + as[i] * j);
        }
    }
    cout << dp[n - 1] << "\n";
}
