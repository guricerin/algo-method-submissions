// 自力解読ならず。
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<set<int>>;

void restore(int v, int p, const G& tree, G& children, vector<int>& parent) {
    for (auto ne : tree[v]) {
        if (ne == p) {
            continue;
        }
        cerr << v << " -> " << ne << endl;
        children[v].insert(ne);
        parent[ne] = v;
        restore(ne, v, tree, children, parent);
    }
}

int main() {
    int n;
    cin >> n;
    auto tree = G(n);
    rep(i, 1, n) {
        int a, b;
        cin >> a >> b;
        tree[a].insert(b);
        tree[b].insert(a);
    }
    auto parent = vector<int>(n, -1);
    auto children = G(n);
    restore(0, 0, tree, children, parent);

    int q;
    cin >> q;
    rep(i, 0, q) {
        int v;
        cin >> v;
        for (auto c : children[parent[v]]) {
            cout << c << " ";
        }
        cout << endl;
    }
}
