#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, m;
    cin >> n >> m;

    double a = 1;
    rep(i, 0, n) {
        a *= m / 6.0;
    }
    double b = 1;
    rep(i, 0, n) {
        b *= (m - 1) / 6.0;
    }
    double ans = a - b;
    cout << fixed << setprecision(10) << ans << endl;
}
