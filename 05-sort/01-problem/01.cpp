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
    double ans = 0;
    int mid = as.size() / 2;
    if (as.size() % 2) {
        ans = as[mid];
    } else {
        ans = (as[mid - 1] + as[mid]) / 2.0;
    }
    cout << fixed << setprecision(1) << ans << endl;
}
