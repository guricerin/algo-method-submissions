#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

double mean_deviation(const vector<int>& ls) {
    auto a = accumulate(all(ls), 0) / (double)ls.size();
    double sum = 0;
    for (auto l : ls) {
        sum += abs(a - l);
    }
    return sum / (double)ls.size();
}

int main() {
    int n;
    cin >> n;
    vector<int> as(n), bs(n);
    rep(i, 0, n) cin >> as[i];
    rep(i, 0, n) cin >> bs[i];

    auto adev = mean_deviation(as), bdev = mean_deviation(bs);
    if (adev < bdev) {
        cout << "A" << endl;
    } else if (adev > bdev) {
        cout << "B" << endl;
    } else {
        cout << "same" << endl;
    }
}
