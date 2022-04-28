#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<i64> as(n);
    rep(i, 0, n) cin >> as[i];
    const int lim = 100010;
    vector<i64> bucket(lim, 0);
    for (auto a : as) {
        bucket[a]++;
    }

    i64 numer = 0;
    rep(i, 0, lim) {
        auto b = bucket[i];
        i64 tmp = (b - 1) * (1 + b - 1) / 2;
        numer += tmp;
    }
    i64 denom = (i64)n * (i64)(n - 1) / 2;
    double ans = (double)numer / (double)denom;
    cout << setprecision(12) << ans << endl;
}
