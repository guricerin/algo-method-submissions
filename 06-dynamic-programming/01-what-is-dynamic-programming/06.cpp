#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> ds(m);
    rep(i, 0, m) cin >> ds[i];

    bool dp[n + 10];
    memset(dp, 0, sizeof(dp));
    dp[0] = true;
    rep(i, 0, m)
    {
        int di = ds[i];
        rep(j, 1, n + 1)
        {
            if (j - di >= 0 && dp[j - di])
            {
                dp[j] = true;
            }
        }
    }
    cout << (dp[n] ? "Yes\n" : "No\n");
}
