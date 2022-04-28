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
        int type;
        cin >> type;
        if (type == 0) {
            int x, y;
            cin >> x >> y;
            followers[y].insert(x);
        } else if (type == 1) {
            int x, y;
            cin >> x >> y;
            followers[y].erase(x);
        } else {
            int x;
            cin >> x;
            cout << followers[x].size() << endl;
        }
    }
}
