#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

const vector<pair<int, int>> dxy{
    make_pair(-1, 0),
    make_pair(0, -1),
    make_pair(0, 1),
    make_pair(1, 0),
};

int main() {
    int h, w;
    cin >> h >> w;
    int x0, y0, x1, y1;
    // 出力例1を見る限り、x1を縦軸、y1を横軸からの位置としている。
    cin >> y0 >> x0 >> y1 >> x1;
    vector<string> maze(h);
    rep(i, 0, h) cin >> maze[i];

    const int lim = 1 << 29;
    vector<vector<int>> dp(h + 10, vector<int>(w + 10, lim));
    dp[y0][x0] = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(y0, x0));
    while (!q.empty()) {
        auto [y, x] = q.front();
        const int cost = dp[y][x] + 1;
        q.pop();
        for (auto [dy, dx] : dxy) {
            auto cury = y + dy, curx = x + dx;
            if (cury < 0 || cury >= h || curx < 0 || curx >= w) continue;
            if (maze[cury][curx] == 'B') continue;

            if (cost < dp[cury][curx]) {
                dp[cury][curx] = cost;
                q.push(make_pair(cury, curx));
            }
        }
    }

    cout << dp[y1][x1] << endl;
}
