// 自力解答ならず。
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<vector<int>>;

void go(const G& graph, vector<int>& colors, int v, bool& ok) {
    queue<int> que;
    que.push(v);
    while (!que.empty()) {
        int u = que.front();
        que.pop();
        for (auto w : graph[u]) {
            if (colors[w] != -1) {
                if (colors[w] == colors[u]) {
                    ok = false;
                }
                continue;
            }
            colors[w] = 1 - colors[u]; // 反転
            que.push(w);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    auto graph = G(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    auto colors = vector<int>(n, -1);
    bool ok = true;
    rep(i, 0, n) {
        if (colors[i] != -1) {
            continue;
        }
        colors[i] = 1;
        go(graph, colors, i, ok);
    }
    cout << (ok ? "Yes" : "No") << endl;
    rep(i, 0, n) {
        cerr << i << ": " << colors[i] << endl;
    }
}
