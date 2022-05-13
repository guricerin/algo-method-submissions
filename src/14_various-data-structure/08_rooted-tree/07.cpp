#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<vector<int>>;

int rec(vector<int>& memo, const G& tree, int v) {
    if (memo[v] >= 0) {
        return memo[v];
    }

    int res = tree[v].size();
    for (auto c : tree[v]) {
        res += rec(memo, tree, c);
    }
    memo[v] = res;
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
    auto memo = vector<int>(n, -1);

    int q;
    cin >> q;
    rep(i, 0, q) {
        int v;
        cin >> v;
        cout << rec(memo, children, v) << endl;
    }
}
