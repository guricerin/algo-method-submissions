#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int a, b;
    cin >> a >> b;

    if ((a + b) & 1) {
        cout << -1 << endl;
        return 0;
    }
    int x = (a + b) / 2;
    int y = a - x;
    int ans = (x >= 0 && y >= 0) ? x : -1;
    cout << ans << endl;
}
