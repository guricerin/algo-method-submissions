#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> ps(n);
    rep(i, 0, n) cin >> ps[i];
    vector<int> ds(m);
    rep(i, 0, m) cin >> ds[i];

    double ans = 1;
    rep(i, 0, m) {
        double p = (double)ps[ds[i] - 1] / 100.0;
        ans *= p;
    }
    cout << fixed << setprecision(10) << ans << endl;
}
