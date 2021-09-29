#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<int>> g(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        g[a].insert(b);
        g[b].insert(a);
    }

    vector<int> seen(n, false);
    seen[0] = true;
    vector<set<int>> dist(n);
    dist[0].insert(0);
    rep(d, 1, n) {
        auto curs = dist[d - 1];
        for (auto cur : curs) {
            for (auto ne : g[cur]) {
                if (seen[ne]) continue;
                dist[d].insert(ne);
                seen[ne] = true;
            }
        }
    }

    int ans = 0;
    rep(i, 0, n) {
        if (dist[i].size() > 0) ans = max(ans, i);
    }
    cout << ans << endl;
}
