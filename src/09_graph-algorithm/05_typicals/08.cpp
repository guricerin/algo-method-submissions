#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<vector<int>>;

bool is_cycle_directed_graph(const G& graph, vector<bool>& seen, vector<bool>& finished, int v) {
    seen[v] = true;
    for (auto u : graph[v]) {
        if (seen[u]) {
            if (!finished[u]) {
                return true;
            }
            continue;
        }
        if (is_cycle_directed_graph(graph, seen, finished, u)) {
            return true;
        }
    }
    finished[v] = true; // 帰りがけ順で探索を終えた。
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    auto graph = G(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }

    auto seen = vector<bool>(n, false);
    auto finished = vector<bool>(n, false);
    bool ans = false;
    rep(i, 0, n) {
        if (seen[i]) {
            continue;
        }
        if (is_cycle_directed_graph(graph, seen, finished, i)) {
            ans = true;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
}
