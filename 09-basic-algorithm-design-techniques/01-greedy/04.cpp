#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> as(n), bs(m);
    rep(i, 0, n) cin >> as[i];
    rep(i, 0, m) cin >> bs[i];

    sort(all(as));
    sort(all(bs));

    int j = 0;
    int ans = 0;
    rep(i, 0, n)
    {
        if (j >= m)
            break;
        while (as[i] > bs[j])
        {
            j++;
        }
        if (j >= m)
            break;
        ans++;
        j++;
        // cout << "ans:" << ans << " i:" << i << " j:" << j << endl;
    }

    cout << ans << endl;
}
