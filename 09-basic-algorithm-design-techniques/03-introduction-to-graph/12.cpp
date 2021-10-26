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
    rep(i, 1, n) {
        int p;
        cin >> p;
        g[p].insert(i);
    }

    vector<int> dp(n + 10, 0);
    function<int(int)> dfs = [&](int cur) {
        int cnum = 0;
        for (auto ne : g[cur]) {
            cnum += dfs(ne);
        }
        dp[cur] = cnum;
        // 親には自分自身の分を加えた数値を渡す
        return cnum + 1;
    };
    dfs(0);

    rep(i, 0, n) {
        cout << dp[i] << endl;
    }
}
