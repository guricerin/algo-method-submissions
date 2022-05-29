// 自力解読ならず。
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i63 = int64_t;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> maze(h, vector<int>(w, 0));
    rep(i, 0, h) rep(j, 0, w) {
        char c;
        cin >> c;
        if (c == '#') {
            maze[i][j] = 1;
        }
    }

    // i+j が偶数 -> (i,j)は(0,0)と同じ色
    // i+j が奇数 -> (i,j)は(0,0)と違う色

    // (0,0)を白にする場合
    int ans1 = 0;
    rep(i, 0, h) rep(j, 0, w) {
        int color = 1;
        if ((i + j) % 2 == 0) color = 0;
        if (maze[i][j] != color) ans1++;
    }
    // (0,0)を黒にする場合
    int ans2 = 0;
    rep(i, 0, h) rep(j, 0, w) {
        int color = 0;
        if ((i + j) % 2 == 0) color = 1;
        if (maze[i][j] != color) ans2++;
    }
    cout << min(ans1, ans2) << endl;
}
