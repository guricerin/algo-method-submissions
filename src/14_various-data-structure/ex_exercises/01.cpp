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
    const vector<pair<int, int>> dyx = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
    int q;
    cin >> q;
    rep(i, 0, q) {
        int x, y;
        cin >> y >> x;
        int ans = 0;
        for (auto& [dy, dx] : dyx) {
            int ny = dy + y, nx = dx + x;
            if (!(0 <= ny && ny < h && 0 <= nx && nx < w)) {
                continue;
            }
            if (maze[ny][nx] == '#') {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
