#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<int>> g(n);
    // 入次数
    vector<int> indegrees(n, 0);
    rep(i, 0, m) {
        int f, s;
        cin >> f >> s;
        g[f].insert(s);
        indegrees[s]++;
    }

    queue<int> q;
    rep(i, 0, n) {
        if (indegrees[i] == 0) q.push(i);
    }
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto ne : g[cur]) {
            indegrees[ne]--;
            if (indegrees[ne] <= 0) {
                q.push(ne);
            }
        }
    }

    bool ok = true;
    rep(i, 0, n) {
        ok &= indegrees[i] == 0;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
