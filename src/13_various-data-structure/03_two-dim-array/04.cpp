#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> maze(h, vector<int>(w, 0));
    rep(i, 0, h) {
        string s;
        cin >> s;
        rep(j, 0, w) {
            if (s[j] == '#') {
                maze[i][j] = 1;
            }
        }
    }

    vector<int> row(h, 0), col(w, 0);
    rep(y, 0, h) {
        row[y] = accumulate(all(maze[y]), 0);
    }
    rep(x, 0, w) {
        int acc = 0;
        rep(y, 0, h) {
            acc += maze[y][x];
        }
        col[x] = acc;
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int y, x;
        cin >> y >> x;
        int ans = row[y] + col[x];
        if (maze[y][x]) ans--;
        cout << ans << endl;
    }
}
