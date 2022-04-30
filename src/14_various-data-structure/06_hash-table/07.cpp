#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, q;
    cin >> n >> q;
    vector<set<int>> followers(n, set<int>());
    rep(i, 0, q) {
        int ty;
        cin >> ty;
        if (ty == 0) {
            int x, y;
            cin >> x >> y;
            followers[y].insert(x);
        } else if (ty == 1) {
            int x, y;
            cin >> x >> y;
            followers[y].erase(x);
        } else {
            int z;
            cin >> z;
            int ans = 0;
            rep(i, 0, n) {
                if (i == z) continue;
                if (followers[i] == followers[z]) ans++;
            }
            cout << ans << endl;
        }
    }
}
