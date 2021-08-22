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
    dp[0] = 0, dp[1] = 1, dp[2] = 2;
    rep(i, 3, n + 1)
    {
        dp[i] = dp[i - 2] + dp[i - 1];
    }
    cout << dp[n] << "\n";
}
