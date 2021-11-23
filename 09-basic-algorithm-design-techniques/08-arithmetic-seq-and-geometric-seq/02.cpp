#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    auto d = (y - x) / (b - a);
    auto ans = x - (a * d);
    cout << ans << endl;
}
