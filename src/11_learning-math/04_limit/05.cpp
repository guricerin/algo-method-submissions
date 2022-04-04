#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int a, b;
    cin >> a >> b;
    double r = (double)a / (double)b;
    if (r < 1) {
        double c = 1.0 / (r - 1.0);
        cout << fixed << setprecision(10) << -c << endl;
    } else {
        cout << -1 << endl;
    }
}
