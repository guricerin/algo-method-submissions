#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> as(n), bs(m);
    rep(i, 0, n)
    {
        cin >> as[i];
    }
    rep(i, 0, m)
    {
        cin >> bs[i];
    }

    int ans = 0;
    rep(i, 0, n) rep(j, 0, m)
    {
        if (as[i] + bs[j] == k)
            ans++;
    }
    cout << ans << "\n";
}
