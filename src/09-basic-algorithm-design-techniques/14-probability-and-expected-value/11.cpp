#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, m, p;
    cin >> n >> m >> p;

    double ap = (double)p / 100.0;
    double bp = (double)(100 - p) / 100.0;
    double tr = 1;
    rep(i, 0, m) {
        tr *= ap;
    }
    rep(i, 0, n - m) {
        tr *= bp;
    }

    int c = 1;
    rep(i, 0, m) {
        c *= (n - i);
    }
    int d = 1;
    rep(i, 0, m) {
        d *= i + 1;
    }
    double cc = (double)c / (double)d;
    double ans = tr * cc;
    cout << fixed << setprecision(10) << ans << endl;
}
