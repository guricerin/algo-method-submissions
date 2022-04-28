#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    const int lim = 100010;
    vector<i64> bucket(lim, 0);
    rep(i, 0, n) {
        i64 a;
        cin >> a;
        bucket[a]++;
    }

    i64 sum = 0;
    rep(i, 0, lim) {
        sum += bucket[i] * i;
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int type;
        cin >> type;
        if (type == 0) {
            int v;
            cin >> v;
            bucket[v]++;
            sum += v;
        } else if (type == 1) {
            int x, y;
            cin >> x >> y;
            i64 xx = bucket[x];
            sum -= x * xx;
            sum = max(sum, (i64)0);
            sum += y * xx;
            bucket[y] += xx;
            bucket[x] = 0;
        } else {
            cout << sum << endl;
        }
    }
}
