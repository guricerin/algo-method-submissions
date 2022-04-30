#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<set<int>> g(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        g[a].insert(b);
        g[b].insert(a);
    }

    set<int> ans;
    for (auto y : g[x]) {
        cerr << "x friend: " << y << endl;
        for (auto a : g[y]) {
            cerr << y << " friend: " << a << endl;
            if (g[x].find(a) == g[x].end() && a != x) {
                ans.insert(a);
            }
        }
    }
    cout << ans.size() << endl;
}
