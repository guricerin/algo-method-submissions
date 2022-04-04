#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, m;
    cin >> n >> m;

    i64 c = 1;
    rep(i, 0, m) {
        c *= (n - i);
    }
    i64 d = 1;
    rep(i, 1, m + 1) {
        d *= i;
    }
    cout << c / d << endl;
}
