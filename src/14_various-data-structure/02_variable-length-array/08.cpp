#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    deque<int> as(n);
    rep(i, 0, n) cin >> as[i];
    int q;
    cin >> q;
    rep(i, 0, q) {
        int t, v;
        cin >> t >> v;
        if (t == 0) {
            as.push_front(v);
        } else if (t == 1) {
            as.push_back(v);
        } else {
            if (as.size() <= v) {
                cout << "Error" << endl;
            } else {
                cout << as[v] << endl;
            }
        }
    }
}
