#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<vector<int>>;

bool is_cycle_directed_graph(const G& graph, const G& terminals) {
    const int n = graph.size();
    auto degs = vector<int>(n);
    rep(i, 0, n) {
        degs[i] = graph[i].size();
    }
    queue<int> que;
    rep(i, 0, n) {
        if (degs[i] == 0) {
            que.push(i);
        }
    }

    vector<int> order;
    while (!que.empty()) {
        int v = que.front();
        que.pop();
        order.push_back(v);
        for (auto u : terminals[v]) {
            degs[u]--;
            if (degs[u] == 0) {
                que.push(u);
            }
        }
    }

    return order.size() != n;
}

int main() {
    int n, m;
    cin >> n >> m;
    auto graph = G(n);
    auto terminated = G(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        terminated[b].push_back(a);
    }

    bool ans = is_cycle_directed_graph(graph, terminated);
    cout << (ans ? "Yes" : "No") << endl;
}
