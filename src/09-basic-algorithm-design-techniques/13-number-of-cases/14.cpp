#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;

    int a = 9;
    int b = n - 1;
    auto f = [](int x, int y) {
        i64 c = 1;
        rep(i, 0, y) {
            c *= (x - i);
        }
        i64 d = 1;
        rep(i, 1, y + 1) {
            d *= i;
        }
        return c / d;
    };
    cout << f(a, b) << endl;
}
