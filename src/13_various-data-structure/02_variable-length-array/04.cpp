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
    int q;
    cin >> q;
    rep(i, 0, q) {
        int t;
        cin >> t;
        if (t == 0) {
            int k, v;
            cin >> k >> v;
            as.insert(as.begin() + k, v);
        } else if (t == 1) {
            int k;
            cin >> k;
            as.erase(as.begin() + k);
        } else {
            int v;
            cin >> v;
            int ans = 0;
            for (auto a : as) {
                if (a == v) ans++;
            }
            cout << ans << endl;
        }
    }
}
