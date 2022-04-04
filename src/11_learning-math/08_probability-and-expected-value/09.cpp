#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;

    double ce = (n - 1) / (double)n;
    double ans = 1.0 - pow(ce, n);
    cout << fixed << setprecision(10) << ans << endl;
}
