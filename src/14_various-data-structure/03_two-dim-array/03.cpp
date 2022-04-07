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
    int p, q;
    cin >> p >> q;

    int ans = 0;
    rep(x, 0, w) {
        if (maze[p][x] == '#') ans++;
    }
    rep(y, 0, h) {
        if (maze[y][q] == '#') ans++;
    }
    if (maze[p][q] == '#') ans--;
    cout << ans << endl;
}
