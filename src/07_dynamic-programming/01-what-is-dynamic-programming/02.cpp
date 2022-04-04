#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];
    vector<int> dp(n + 1);
    dp[0] = 0, dp[1] = as[1];
    rep(i, 2, n)
    {
        dp[i] = min({dp[i - 1] + as[i], dp[i - 2] + as[i] * 2});
    }
    cout << dp[n - 1] << "\n";
}
