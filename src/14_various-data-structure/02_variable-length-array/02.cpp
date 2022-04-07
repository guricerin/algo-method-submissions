#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];
    int q;
    cin >> q;
    rep(i, 0, q) {
        int k, v;
        cin >> k >> v;
        if (k == 0) {
            if (as.size() <= v) {
                cout << "Error" << endl;
            } else {
                cout << as[v] << endl;
            }
        } else {
            as.push_back(v);
        }
    }
}
