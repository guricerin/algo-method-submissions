#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;

    double area = 0;
    rep(i, 0, n) {
        double w = 1.0 / (double)n;
        double x = (double)i * w;
        double y = sqrt(1 - (x * x));
        area += w * y;
    }
    auto ans = area * 4;
    cout << fixed << setprecision(10) << ans << endl;
}
