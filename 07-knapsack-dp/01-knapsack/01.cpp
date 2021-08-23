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
    vector<int> dp(n + 1, 0);
    rep(i, 0, n)
    {
        dp[i + 1] = max(dp[i], dp[i] + as[i]);
    }
    cout << dp[n] << "\n";
}
