#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

vector<pair<int, int>> dyx = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

void rec(const vector<vector<bool>>& maze, vector<vector<bool>>& seen, int h, int w, int y, int x) {
    seen[y][x] = true;
    for (auto& yx : dyx) {
        auto [dy, dx] = yx;
        int ny = dy + y, nx = dx + x;
        if (ny < 0 || h <= ny || nx < 0 || w <= nx) {
            continue;
        }
        if (!maze[ny][nx] || seen[ny][nx]) {
            continue;
        }
        rec(maze, seen, h, w, ny, nx);
    }
}

int main() {
    int h, w;
    cin >> h >> w;
    auto maze = vector<vector<bool>>(h, vector<bool>(w, false));
    rep(i, 0, h) {
        string s;
        cin >> s;
        rep(j, 0, w) {
            if (s[j] == '#') {
                maze[i][j] = true;
            }
        }
    }

    auto seen = vector<vector<bool>>(h, vector<bool>(w, false));
    int ans = 0;
    rep(i, 0, h) rep(j, 0, w) {
        if (!maze[i][j]) continue;
        if (seen[i][j]) continue;
        rec(maze, seen, h, w, i, j);
        ans++;
    }
    cout << ans << endl;
}
