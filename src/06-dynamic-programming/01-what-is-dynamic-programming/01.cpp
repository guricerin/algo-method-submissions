#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> dp(n);
    dp[0] = x, dp[1] = y;
    rep(i, 2, n)
    {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 100;
    }
    cout << dp[n - 1] << "\n";
}
