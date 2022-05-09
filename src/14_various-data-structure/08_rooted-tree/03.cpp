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
    rep(i, 1, n) {
        cin >> parents[i];
        children[parents[i]].insert(i);
    }

    int ans = 0;
    for (auto& c : children) {
        if (c.size() <= 0) ans++;
    }
    cout << ans << endl;
}
