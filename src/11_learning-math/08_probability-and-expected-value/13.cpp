#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, k;
    cin >> n >> k;

    double ans = 1;
    rep(i, 0, k) {
        if (i == k - 1) {
            ans *= 1.0 / (double)(n - i);
        } else {
            ans *= (double)(n - 1 - i) / (double)(n - i);
        }
    }
    cout << fixed << setprecision(10) << ans << endl;
}
