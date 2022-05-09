#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> ps(n, -1);
    vector<set<int>> children(n);
    rep(i, 1, n) {
        cin >> ps[i];
        children[ps[i]].insert(i);
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int v;
        cin >> v;
        for (auto c : children[ps[v]]) {
            cout << c << " ";
        }
        cout << endl;
    }
}
