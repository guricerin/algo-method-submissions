#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int h, q;
    cin >> h >> q;
    const int max_node = pow(2, h + 1) - 2;
    rep(i, 0, q) {
        int t, v;
        cin >> t >> v;
        if (t == 0) {
            if (v == 0) {
                cout << -1 << endl;
            } else {
                int p = (v - 1) / 2;
                cout << p << endl;
            }
        } else if (t == 1) {
            int l = v * 2 + 1;
            if (l <= max_node) {
                cout << l << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            int r = v * 2 + 2;
            if (r <= max_node) {
                cout << r << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
}
