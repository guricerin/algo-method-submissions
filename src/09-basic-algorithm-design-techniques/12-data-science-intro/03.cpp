#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];
    sort(all(as));

    if (n & 1) {
        cout << as[n / 2] << endl;
    } else {
        double ans = (as[n / 2 - 1] + as[n / 2]) / 2.0;
        cout << fixed << setprecision(10) << ans << endl;
    }
}
