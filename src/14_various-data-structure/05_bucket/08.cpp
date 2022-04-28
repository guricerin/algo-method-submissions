#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    const auto lim = 110;
    vector<int> bucket(lim * lim * 2 + 10, 0);
    rep(i, -lim, lim) rep(j, -lim, lim) {
        int p = i * i + j * j;
        bucket[p]++;
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int p;
        cin >> p;
        cout << bucket[p] << endl;
    }
}
