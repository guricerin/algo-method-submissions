#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<set<int>>;
vector<int> ans = vector<int>();

void rec(const G& tree, int v) {
    for (auto& c : tree[v]) {
        rec(tree, c);
    }
    ans.push_back(v);
}

int main() {
    int n;
    cin >> n;
    auto tree = G(n);
    rep(i, 1, n) {
        int a;
        cin >> a;
        tree[a].insert(i);
    }
    rec(tree, 0);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}
