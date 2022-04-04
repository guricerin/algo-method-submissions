#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int x, y;
    cin >> x >> y;

    int ans = 0;
    rep(i, 1, 7) rep(j, 1, 7) {
        int a = i + j;
        if (a == x || a == y) ans++;
    }
    cout << ans << endl;
}
