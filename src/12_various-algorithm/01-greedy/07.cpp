#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> st(n);
    rep(i, 0, n) cin >> st[i].first >> st[i].second;

    sort(all(st), [](pair<int, int> a, pair<int, int> b)
         { return a.second < b.second; });

    int cur = 0, ans = 0;
    rep(i, 0, n)
    {
        if (cur > st[i].first)
            continue;
        ans++;
        cur = st[i].second;
    }

    cout << ans << endl;
}
