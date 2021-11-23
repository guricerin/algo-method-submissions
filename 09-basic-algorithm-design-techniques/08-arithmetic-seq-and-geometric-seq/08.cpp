#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    i64 n, x, r;
    cin >> n >> x >> r;

    // 1e9 + 9 ではない
    const i64 m = 1e9;
    i64 rn = 1;
    rep(i, 0, n) {
        rn = (rn * r) % m;
    }
    // + m が必要
    i64 ans = x * (rn - 1 + m) % m;
    cout << ans << endl;
}
