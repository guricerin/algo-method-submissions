#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<set<int>> g(n);
    rep(i, 0, n - 1) {
        int p;
        cin >> p;
        g[p].insert(i + 1);
    }

    vector<int> ans(n, 0);
    function<void(int, int)> dfs = [&](int cur, int acc) {
        ans[cur] = acc;
        for (auto& ne : g[cur]) {
            dfs(ne, acc + 1);
        }
    };
    dfs(0, 0);

    for (auto a : ans) {
        cout << a << endl;
    }
}
