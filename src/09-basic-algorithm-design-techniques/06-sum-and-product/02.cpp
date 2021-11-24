#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int l, r;
    cin >> l >> r;
    int ans = 0;
    for (int i = l; i <= r; i++) {
        int x = 2 * i - 1;
        ans += x * x;
    }
    cout << ans << endl;
}
