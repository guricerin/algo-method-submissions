#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    double a, b;
    cin >> n >> a >> b;
    rep(i, 0, n) {
        double x = b + a;
        cout << fixed << setprecision(10) << x << endl;
        b = (a + b) / 2.0;
    }
}
