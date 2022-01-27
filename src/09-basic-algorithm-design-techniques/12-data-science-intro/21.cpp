#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> as(n), bs(n);
    rep(i, 0, n) cin >> as[i];
    rep(i, 0, n) cin >> bs[i];

    auto aave = accumulate(all(as), 0.0) / (double)n;
    auto bave = accumulate(all(bs), 0.0) / (double)n;
    double sum = 0;
    rep(i, 0, n) {
        sum += (as[i] - aave) * (bs[i] - bave);
    }
    auto ans = sum / (double)n;
    cout << fixed << setprecision(10) << ans << endl;
}
