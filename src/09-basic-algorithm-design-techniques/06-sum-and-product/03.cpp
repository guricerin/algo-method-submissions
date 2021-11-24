#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> as(n), bs(m);
    rep(i, 0, n) cin >> as[i];
    rep(i, 0, m) cin >> bs[i];
    int ans = 0;
    rep(i, 0, n) rep(j, 0, m) ans += as[i] + bs[j];
    cout << ans << endl;
}
