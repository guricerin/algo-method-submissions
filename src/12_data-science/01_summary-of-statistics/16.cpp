#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

template <class T>
double median(const vector<T>& ls) {
    int mid = ls.size() / 2;
    if (ls.size() & 1) {
        return ls[mid];
    } else {
        return (ls[mid - 1] + ls[mid]) / 2.0;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];
    sort(all(as));

    vector<int> ls, rs;
    if (n & 1) {
        copy(as.begin(), as.begin() + n / 2, back_inserter(ls));
        copy(as.begin() + n / 2 + 1, as.end(), back_inserter(rs));
    } else {
        copy(as.begin(), as.begin() + n / 2, back_inserter(ls));
        copy(as.begin() + n / 2, as.end(), back_inserter(rs));
    }
    auto l = median(ls), r = median(rs), m = median(as);
    cout << fixed << setprecision(10);
    cout << l << " " << m << " " << r << endl;
}
