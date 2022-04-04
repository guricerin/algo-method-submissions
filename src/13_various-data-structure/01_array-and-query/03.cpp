#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    vector<int> as = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int q;
    cin >> q;
    rep(i, 0, q) {
        int a;
        cin >> a;
        if (a == 0) {
            int k;
            cin >> k;
            cout << as[k] << endl;
        } else {
            int k, v;
            cin >> k >> v;
            as[k] = v;
        }
    }
}
