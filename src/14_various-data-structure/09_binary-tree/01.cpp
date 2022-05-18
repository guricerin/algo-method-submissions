#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<pair<int, int>>;

vector<int> ans;

void rec(const G& tree, int v) {
    auto l = tree[v].first, r = tree[v].second;
    if (l != -1) {
        rec(tree, l);
    }
    ans.push_back(v);
    if (r != -1) {
        rec(tree, r);
    }
}

int main() {
    int n;
    cin >> n;
    auto tree = G(n);
    rep(i, 0, n) {
        int l, r;
        cin >> l >> r;
        tree[i].first = l, tree[i].second = r;
    }
    rec(tree, 0);

    for (auto v : ans) {
        cout << v << " ";
    }
    cout << endl;
}
