#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int x, ave, sd;
    cin >> x >> ave >> sd;

    double ans = 50 + 10.0 * (x - ave) / (double)sd;
    cout << fixed << setprecision(10) << ans << endl;
}
