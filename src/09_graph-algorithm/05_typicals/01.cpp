#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<vector<int>>;

void go(const G& tree, vector<bool>& seen, int v) {
    seen[v] = true;
    for (auto u : tree[v]) {
        if (seen[u]) continue;
        go(tree, seen, u);
    }
}

int main() {
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    auto tree = G(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
    }

    auto seen = vector<bool>(n, false);
    go(tree, seen, s);
    cout << (seen[t] ? "Yes" : "No") << endl;
}
