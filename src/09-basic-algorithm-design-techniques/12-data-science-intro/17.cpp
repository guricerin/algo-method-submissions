#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

template <class T>
tuple<double, double, double> quartile(const vector<T>& ls) {
    // [l,r) における中央値
    auto f = [&](int l, int r) {
        const int sz = r - l;
        if (sz & 1) {
            int mid = l + (r - l - 1) / 2;
            return (double)ls[mid];
        } else {
            int mid = l + (r - l) / 2;
            return ((double)ls[mid - 1] + (double)ls[mid]) / 2.0;
        }
    };

    const int n = ls.size();
    double m = f(0, n);
    double l, r;
    if (n & 1) {
        l = f(0, (n - 1) / 2);
        r = f((n - 1) / 2 + 1, n);
    } else {
        l = f(0, n / 2);
        r = f(n / 2, n);
    }
    return make_tuple(l, m, r);
}

int main() {
    int n;
    cin >> n;
    vector<int> as(n), bs(n);
    rep(i, 0, n) cin >> as[i];
    rep(i, 0, n) cin >> bs[i];

    sort(all(as));
    sort(all(bs));

    auto [al, am, ar] = quartile(as);
    auto [bl, bm, br] = quartile(bs);
    auto a = ar - al, b = br - bl;
    if (a < b) {
        cout << "A" << endl;
    } else if (a > b) {
        cout << "B" << endl;
    } else {
        cout << "same" << endl;
    }
}
