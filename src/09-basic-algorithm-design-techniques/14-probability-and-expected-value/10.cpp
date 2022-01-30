#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, m;
    cin >> n >> m;

    int al = pow(2, n);
    int c = 1;
    rep(i, 0, m) {
        c *= (n - i);
    }
    int d = 1;
    rep(i, 0, m) {
        d *= i + 1;
    }
    c /= d;
    double ans = (double)c / (double)al;
    cout << fixed << setprecision(10) << ans << endl;
}
