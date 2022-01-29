#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    i64 c = 1;
    rep(i, 0, a) {
        c *= (n - i);
    }
    i64 d = 1;
    rep(i, 1, a + 1) {
        d *= i;
    }
    cout << c / d << endl;
}
