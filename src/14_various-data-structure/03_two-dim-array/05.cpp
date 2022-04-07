#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int dxy[5][2] = {{-1, 0}, {0, -1}, {0, 0}, {0, 1}, {1, 0}};

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

    int Q;
    cin >> Q;
    rep(i, 0, Q) {
        int t, p, q;
        cin >> t >> p >> q;
        if (t == 0) {
            rep(j, 0, 5) {
                int ny = p + dxy[j][0], nx = q + dxy[j][1];
                if (ny < 0 || h <= ny || nx < 0 || w <= nx) continue;
                maze[ny][nx] = !maze[ny][nx];
            }
        } else {
            int ans = 0;
            rep(j, 0, 5) {
                int ny = p + dxy[j][0], nx = q + dxy[j][1];
                if (ny < 0 || h <= ny || nx < 0 || w <= nx) continue;
                ans += maze[ny][nx];
            }
            cout << ans << endl;
        }
    }
}
