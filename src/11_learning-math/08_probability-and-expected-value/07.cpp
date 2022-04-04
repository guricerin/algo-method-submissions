#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    double n;
    cin >> n;

    double ans = 0;
    ans += 1.0 / n * 1.0 / n;
    ans += 1.0 / n * (n - 1) / n;
    ans += (n - 1) / n * 1.0 / n;
    cout << fixed << setprecision(10) << ans << endl;
}
