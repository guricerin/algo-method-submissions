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

    double ave = accumulate(all(as), 0) / (double)as.size();
    double sum = 0;
    for (auto a : as) {
        sum += pow(a - ave, 2);
    }
    auto variance = sum / (double)as.size();
    auto std_deviation = sqrt(variance);
    cout << fixed << setprecision(10);
    cout << variance << endl;
    cout << std_deviation << endl;
}
