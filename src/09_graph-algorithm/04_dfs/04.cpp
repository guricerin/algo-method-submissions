#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<vector<int>>;

void rec(const G& tree, vector<bool>& seen, int v) {
    seen[v] = true;
    for (auto u : tree[v]) {
        if (seen[u]) {
            continue;
        }
        rec(tree, seen, u);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    auto tree = G(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
    }

    auto seen = vector<bool>(n, false);
    rec(tree, seen, 0);
    int ans = 0;
    for (auto b : seen) {
        if (!b) ans++;
    }
    cout << ans << endl;
}
