#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int r;
    cin >> r;

    auto ans = pow(r, 3) * 4.0 / 3.0;
    cout << fixed << setprecision(10) << ans << endl;
}
