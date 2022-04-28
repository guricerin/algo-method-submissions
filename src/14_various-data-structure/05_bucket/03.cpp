#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    const int len = 100010;
    vector<int> bucket(len, 0);
    rep(i, 0, n) {
        int a;
        cin >> a;
        bucket[a]++;
    }
    int q;
    cin >> q;
    rep(i, 0, q) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            bucket[v]++;
        } else if (x == 1) {
            bucket[v] = 0;
        } else {
            cout << bucket[v] << endl;
        }
    }
}
