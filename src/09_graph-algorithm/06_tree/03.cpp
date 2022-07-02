#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<vector<int>>;

void rec(const G& tree, vector<bool>& seen, vector<int>& height, int v) {
    seen[v] = true;
    for (auto u : tree[v]) {
        if (seen[u]) {
            continue;
        }
        height[u] = height[v] + 1;
        rec(tree, seen, height, u);
    }
}

int main() {
    int n;
    cin >> n;
    auto tree = G(n);
    rep(i, 0, n - 1) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    auto height = vector<int>(n);
    auto seen = vector<bool>(n);
    rec(tree, seen, height, 0);
    int ans = *max_element(all(height));
    cout << ans << endl;
}
