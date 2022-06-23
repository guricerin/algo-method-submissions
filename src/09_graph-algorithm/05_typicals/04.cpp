// 自力解答ならず。
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<vector<int>>;

void go(const G& graph, vector<int>& colors, int v, bool& ok) {
    for (auto u : graph[v]) {
        if (colors[u] != -1) {
            if (colors[u] == colors[v]) {
                ok = false;
            }
            continue;
        }
        colors[u] = 1 - colors[v]; // 反転
        go(graph, colors, u, ok);
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
        // 二部グラフの性質: ある頂点の色を決め打ちしたとき、その頂点を含む連結成分に含まれるすべての頂点の色が自動的に決まる。
        // 未探索ならば色を決め打ちして探索。
        colors[i] = 1;
        go(graph, colors, i, ok);
    }
    cout << (ok ? "Yes" : "No") << endl;
    rep(i, 0, n) {
        cerr << i << ": " << colors[i] << endl;
    }
}
