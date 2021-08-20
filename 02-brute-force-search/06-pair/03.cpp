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

    int ans = 0;
    rep(i, 0, n) rep(j, i + 1, n) rep(k, j + 1, n)
    {
        auto m = max({as[i], as[j], as[k]});
        if (m == as[j])
            ans++;
    }
    cout << ans << "\n";
}
