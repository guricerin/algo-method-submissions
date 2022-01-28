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

    double sum = accumulate(all(as), 0.0);
    auto b = -2 * sum / (double)n;
    auto d = b / 2.0;
    cout << fixed << setprecision(10) << -d << endl;
}
