#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

bool rec(const vector<int>& ls, int v) {
    int l = v * 2 + 1, r = v * 2 + 2;
    if (l < ls.size()) {
        if (!(ls[l] <= ls[v])) {
            return false;
        }
        if (!rec(ls, l)) {
            return false;
        }
    }
    if (r < ls.size()) {
        if (!(ls[r] <= ls[v])) {
            return false;
        }
        if (!rec(ls, r)) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) {
        cin >> as[i];
    }
    bool ok = rec(as, 0);
    cout << (ok ? "Yes" : "No") << endl;
}
