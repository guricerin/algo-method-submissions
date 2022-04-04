#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, k;
    cin >> n >> k;
    vector<i64> as(n);
    rep(i, 0, n) cin >> as[i];

    sort(all(as));
    i64 ans = numeric_limits<i64>::max();
    for (int l = 0, r = k - 1; r < n; l++, r++) {
        int tmp = abs(as[r] - as[l]);
        if (ans > tmp) ans = tmp;
    }
    cout << ans << endl;
}
