#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> front(n, -1), back(n, -1);
    rep(i, 0, q) {
        int t;
        cin >> t;
        if (t == 0) {
            int p, q;
            cin >> p >> q;
            front[p] = q;
            back[q] = p;
        } else {
            int r;
            cin >> r;
            auto f = front[r];
            auto b = back[r];
            if (f != -1) {
                back[f] = b;
            }
            if (b != -1) {
                front[b] = f;
            }
            front[r] = -1;
            back[r] = -1;
        }
    }

    int ans = 1;
    int cur = front[0];
    while (cur != -1) {
        cur = front[cur];
        ans++;
    }
    cur = back[0];
    while (cur != -1) {
        cur = back[cur];
        ans++;
    }
    cout << ans << endl;
}
