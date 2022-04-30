#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<int>> g(n, set<int>());
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        g[a].insert(b), g[b].insert(a);
    }

    int cand = (int)1e9;
    int maxsize = 0;
    rrep(i, n - 1, 0) {
        if (maxsize <= g[i].size()) {
            maxsize = g[i].size();
            cand = i;
        }
    }
    for (auto a : g[cand]) {
        cout << a << " ";
    }
    cout << endl;
}
