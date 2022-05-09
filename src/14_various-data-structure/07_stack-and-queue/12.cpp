#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> maze(h);
    rep(i, 0, h) {
        cin >> maze[i];
    }

    const int INF = 1e9;
    vector<vector<int>> ans(h, vector<int>(w, INF));
    pair<int, int> start, goal;
    rep(i, 0, h) rep(j, 0, w) {
        char c = maze[i][j];
        if (c == 'S') {
            ans[i][j] = 0;
            start = {i, j};
        } else if (c == 'G') {
            goal = {i, j};
        }
    }

    vector<pair<int, int>> dxy = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
    queue<pair<int, int>> que;
    que.push(start);
    while (!que.empty()) {
        auto cur = que.front();
        que.pop();
        for (auto xy : dxy) {
            int ny = cur.first + xy.first, nx = cur.second + xy.second;
            if (ny < 0 || ny >= h || nx < 0 || nx >= w) {
                continue;
            }
            if (maze[ny][nx] == '#') {
                continue;
            }

            int step = ans[cur.first][cur.second] + 1;
            if (ans[ny][nx] > step) {
                ans[ny][nx] = step;
                que.push({ny, nx});
            }
        }
    }

    int g = ans[goal.first][goal.second];
    cout << (g == INF ? -1 : g) << endl;
}
