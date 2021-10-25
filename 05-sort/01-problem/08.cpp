#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    i64 n, k;
    cin >> n >> k;
    vector<pair<i64, i64>> ls(n);
    rep(i, 0, n) {
        cin >> ls[i].first >> ls[i].second;
    }

    sort(all(ls));
    i64 ans = 0;
    rep(i, 0, n) {
        if (ls[i].second == 0) continue;

        if (k <= ls[i].second) {
            ans += k * ls[i].first;
            break;
        } else {
            ans += ls[i].second * ls[i].first;
            k -= ls[i].second;
        }
    }
    cout << ans << endl;
}
