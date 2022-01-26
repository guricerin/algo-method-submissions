#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

double variance(const vector<double>& ls) {
    auto ave = accumulate(all(ls), 0) / (double)ls.size();
    double sum = 0;
    for (auto l : ls) {
        sum += pow(l - ave, 2);
    }
    return sum / (double)ls.size();
}

int main() {
    int n;
    cin >> n;
    vector<double> as(n);
    rep(i, 0, n) cin >> as[i];

    cout << 1 << endl;
}
