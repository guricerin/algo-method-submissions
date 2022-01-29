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

    int a = 0;
    rep(i, 0, n) {
        if ((i + 1) % x == 0) a += ps[i];
    }
    double ans = (double)a / 100.0;
    cout << fixed << setprecision(10) << ans << endl;
}
