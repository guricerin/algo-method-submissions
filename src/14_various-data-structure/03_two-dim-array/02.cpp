#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, q;
    cin >> n >> q;
    vector<set<int>> sns(n, set<int>());
    rep(i, 0, q) {
        int t;
        cin >> t;
        if (t == 0) {
            int x, y;
            cin >> x >> y;
            sns[y].insert(x);
        } else {
            int z;
            cin >> z;
            if (sns[z].size() < 1) {
                cout << "No\n";
            } else {
                for (auto x : sns[z]) {
                    cout << x << " ";
                }
                cout << endl;
            }
        }
    }
}
