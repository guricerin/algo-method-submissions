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
        int t;
        cin >> t;
        if (t == 0) {
            int v;
            cin >> v;
            as.push_back(v);
        } else {
            if (as.size() < 1) {
                cout << "Error" << endl;
            } else {
                int v = as.back();
                as.pop_back();
                cout << v << endl;
            }
        }
    }
}
