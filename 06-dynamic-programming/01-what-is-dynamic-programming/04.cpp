#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 0, dp[1] = 1, dp[2] = 2, dp[3] = 4;
    rep(i, 4, n + 1)
    {
        // 最後に1を置く: i-1 からのツリー
        // 最後に2を置く: i-2 からのツリー
        // 最後に3を置く: i-3 からのツリー
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    cout << dp[n] << "\n";
}
