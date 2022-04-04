#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    sort(all(as), [](int a, int b) {
        return a > b;
    });
    int ans = 0;
    rep(i, 0, k) ans += as[i];
    cout << ans << endl;
}
