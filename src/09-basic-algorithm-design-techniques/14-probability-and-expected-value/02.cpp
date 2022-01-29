#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int x;
    cin >> x;
    int cnt = 0;
    rep(i, 1, 7) rep(j, 1, 7) {
        if (i + j == x) cnt++;
    }
    double ans = (double)cnt / 36.0;
    cout << fixed << setprecision(10) << ans << endl;
}
