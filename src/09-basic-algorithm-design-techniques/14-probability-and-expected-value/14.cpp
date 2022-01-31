#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;

    double ce = 1;
    rep(i, 0, n) {
        ce *= (365 - i) / 365.0;
    }
    double ans = 1.0 - ce;
    cout << fixed << setprecision(10) << ans << endl;
}
