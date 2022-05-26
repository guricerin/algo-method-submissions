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
    sort(all(as));
    bool ok = true;
    rep(i, 0, n) {
        if (as[i] != i + 1) ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
