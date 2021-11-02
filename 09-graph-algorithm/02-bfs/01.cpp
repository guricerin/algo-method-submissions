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

    vector<set<int>> ans(n);
    ans[0].insert(0);
    vector<bool> seen(n, false);
    seen[0] = true;
    rep(k, 1, n) {
        auto curs = ans[k - 1];
        for (auto cur : curs) {
            for (auto ne : g[cur]) {
                if (seen[ne]) continue;
                ans[k].insert(ne);
                seen[ne] = true;
            }
        }
    }

    rep(k, 0, n) {
        for (auto a : ans[k]) {
            cout << a << " ";
        }
        cout << endl;
    }
}
