#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> as(x), bs(y), cs(z);
    rep(i, 0, x) cin >> as[i];
    rep(i, 0, y) cin >> bs[i];
    rep(i, 0, z) cin >> cs[i];

    int ans = 0;
    rep(i, 0, x) rep(j, 0, y) rep(k, 0, z)
    {
        if (as[i] + bs[j] == cs[k])
            ans++;
    }
    cout << ans << "\n";
}
