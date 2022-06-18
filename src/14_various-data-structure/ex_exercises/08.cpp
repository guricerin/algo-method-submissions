#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    // 愚直に盤面をシミュレートするとO(HW)かかる。
    // コマのあるマスのみに注目することでO(N)で解ける。
    map<pair<int, int>, int> memo;
    i64 ans = 0;
    rep(i, 0, n) {
        int x, y;
        cin >> y >> x;
        int ry = h - 1 - y, rx = w - 1 - x;

        memo[{y, x}] += 1;
        memo[{ry, rx}] += 1;
    }

    for (const auto& [yx, c] : memo) {
        if (c >= 2) {
            ans++;
        }
    }
    cout << ans << endl;
}
