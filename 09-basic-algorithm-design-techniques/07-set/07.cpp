#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> as(x), bs(y);
    rep(i, 0, x) cin >> as[i];
    rep(i, 0, y) cin >> bs[i];

    vector<int> ab;
    rep(i, 0, x) {
        rep(j, 0, y) {
            if (as[i] == bs[j]) {
                ab.push_back(as[i]);
            }
        }
    }

    int aorb = as.size() + bs.size() - ab.size();
    cout << n - aorb << endl;
}
