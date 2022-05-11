#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<vector<int>>;

int rec(const G& tree, int v) {
    int res = tree[v].size();
    for (auto& c : tree[v]) {
        res += rec(tree, c);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    auto children = G(n);
    rep(i, 1, n) {
        int a;
        cin >> a;
        children[a].push_back(i);
    }
    int v;
    cin >> v;
    cout << rec(children, v) << endl;
}
