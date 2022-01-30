#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> ps(n);
    rep(i, 0, n) cin >> ps[i];

    double ans = 0;
    rep(i, 0, n) rep(j, 0, n) {
        int y = i + 1 + j + 1;
        if (y == x) ans += (double)ps[i] / 100.0 * (double)ps[j] / 100.0;
    }
    cout << fixed << setprecision(10) << ans << endl;
}
