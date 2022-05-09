#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> parents(n, -1);
    vector<set<int>> children(n);
    rep(i, 0, n - 1) {
        int a, b;
        cin >> a >> b;
        parents[b] = a;
        children[a].insert(b);
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int v;
        cin >> v;
        if (parents[v] == -1) {
            cout << v << endl;
        } else {
            for (auto c : children[parents[v]]) {
                cout << c << " ";
            }
            cout << endl;
        }
    }
}
