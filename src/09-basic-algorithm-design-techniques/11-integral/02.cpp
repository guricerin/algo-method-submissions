#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    i64 l, r, a, b;
    cin >> l >> r >> a >> b;

    i64 ans = 0;
    rep(i, l, r) {
        auto x = i;
        auto y = a * x + b;
        ans += y;
    }
    cout << ans << endl;
}
