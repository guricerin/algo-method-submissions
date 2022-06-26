#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;
using G = vector<vector<int>>;

vector<int> topological_sort_bfs(G& graph, G& terminals) {
    const int n = graph.size();
    rep(i, 0, n) {
        sort(all(terminals[i]));
    }
    cerr << n << endl;
    vector<int> degs(n); // 出次数
    rep(i, 0, n) {
        degs[i] = graph[i].size();
    }
    queue<int> que;
    rep(i, 0, n) { // 出次数が0の頂点（シンク）を格納しておく。
        if (degs[i] == 0) {
            que.push(i);
        }
    }

    vector<int> res;
    while (!que.empty()) {
        int v = que.front();
        que.pop();
        cerr << v << endl;
        res.push_back(v);
        for (auto u : terminals[v]) {
            degs[u]--;
            if (degs[u] == 0) {
                que.push(u);
            }
        }
    }

    reverse(all(res));
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    auto graph = G(n);
    auto terminals = G(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        terminals[b].push_back(a);
    }
    auto ans = topological_sort_bfs(graph, terminals);
    for (auto v : ans) {
        cout << v << " ";
    }
    cout << endl;
}
