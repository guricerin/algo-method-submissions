#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

/// 平均
template <class T>
double average(const vector<T>& ls) {
    return accumulate(all(ls), 0.0) / (double)ls.size();
}

/// 分散 : データの散らばり具合
/// 各要素に対する「データの平均値からの距離の二乗」の平均値
/// 分散が0 -> データの値がすべて等しい
template <class T>
double variance(const vector<T>& ls) {
    auto ave = average(ls);
    double sum = 0;
    for (auto l : ls) {
        sum += pow(l - ave, 2);
    }
    return sum / (double)ls.size();
}

/// 標準偏差 : 分散の非負の平方根
/// 分散と比較した場合、各データの単位と一致するというメリットがある
template <class T>
double std_deviation(const vector<T>& ls) {
    auto omega = variance(ls);
    return sqrt(omega);
}

int main() {
    int n;
    cin >> n;
    vector<int> as(n), bs(n);
    rep(i, 0, n) cin >> as[i];
    rep(i, 0, n) cin >> bs[i];

    auto aave = average(as), bave = average(bs);
    auto asd = std_deviation(as), bsd = std_deviation(bs);
    double covar = 0;
    rep(i, 0, n) {
        covar += (as[i] - aave) * (bs[i] - bave);
    }
    covar /= n;
    auto ans = covar / (asd * bsd);
    cout << fixed << setprecision(10) << ans << endl;
}
