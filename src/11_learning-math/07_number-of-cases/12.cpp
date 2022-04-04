#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    auto f = [](int a, int b) {
        i64 c = 1;
        rep(i, 0, b) {
            c *= (a - i);
        }
        i64 d = 1;
        rep(i, 1, b + 1) {
            d *= i;
        }
        return c / d;
    };
    auto x = f(n, a), y = f(n - a, b);
    cout << x * y << endl;
}
