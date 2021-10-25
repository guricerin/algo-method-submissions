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

    // 座標圧縮
    // https://drken1215.hatenablog.com/entry/2021/08/09/235400
    auto ranks = as;
    sort(all(ranks), [](int a, int b) {
        return a > b;
    });
    ranks.erase(unique(all(ranks)), ranks.end());

    rep(i, 0, n) {
        int a = as[i];
        int ng = -1, ok = ranks.size();
        while (abs(ok - ng) > 1) {
            int mid = (ok + ng) / 2;
            if (ranks[mid] <= as[i]) {
                ok = mid;
            } else {
                ng = mid;
            }
        }
        cout << ok << endl;
    }
}
