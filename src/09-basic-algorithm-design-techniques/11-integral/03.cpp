#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    double a, b, h;
    cin >> a >> b >> h;
    rep(k, 0, 6) {
        auto n = pow(10, k);
        double ans = 0;
        double x = 0;
        rep(i, 0, n) {
            auto y = (b - a) / h * x + a;
            ans += y * h / n;
            x += h / n;
        }
        cout << fixed << setprecision(10) << ans << endl;
    }
}
