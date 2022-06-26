#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<vector<int>>;

void topological_inner(const G& graph, vector<bool>& seen, vector<int>& res, int v) {
    seen[v] = true;
    for (auto u : graph[v]) {
        if (seen[u]) {
            continue;
        }
        topological_inner(graph, seen, res, u);
    }
    res.push_back(v);
}

vector<int> topological_sort(G& graph) {
    vector<int> res;
    const int n = graph.size();
    auto seen = vector<bool>(n, false);
    rep(i, 0, n) {
        sort(all(graph[i]));
    }
    rep(v, 0, n) {
        if (seen[v]) {
            continue;
        }
        topological_inner(graph, seen, res, v);
    }

    reverse(all(res));
    return res;
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
    auto ans = topological_sort(graph);
    for (auto v : ans) {
        cout << v << " ";
    }
    cout << endl;
}
