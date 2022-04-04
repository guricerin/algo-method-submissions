#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

i64 nck(int n, int k) {
    i64 a = 1;
    rep(i, 0, k) {
        a *= n - i;
    }
    i64 b = 1;
    rep(i, 0, k) {
        b *= i + 1;
    }
    cout << "a:" << a << " b:" << b << endl;
    return a / b;
}

int main() {
    int n, k;
    cin >> n >> k;

    // i64 al = nck(n, k);
    // i64 tr = nck(n - 1, k - 1);
    // double ans = (double)tr / (double)al;
    // 上のままだとオーバーフローする
    // 式変形したら下になる
    double ans = (double)k / (double)n;
    cout << fixed << setprecision(10) << ans << endl;
}
