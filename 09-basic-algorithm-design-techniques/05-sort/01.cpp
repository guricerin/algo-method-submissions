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
    rep(i, 0, n) {
        cin >> as[i];
    }

    while (1) {
        bool ok = true;
        rep(i, 0, n - 1) {
            if (as[i] > as[i + 1]) {
                swap(as[i], as[i + 1]);
                ok = false;
            }
        }
        if (ok) break;

        for (auto a : as) {
            cout << a << " ";
        }
        cout << endl;
    }
}
