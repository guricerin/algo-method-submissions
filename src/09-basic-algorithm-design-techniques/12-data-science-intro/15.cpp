#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> hs(n);
    rep(i, 0, n) cin >> hs[i];

    double ma = *max_element(all(hs)), mi = *min_element(all(hs));
    cout << fixed << setprecision(10);
    for (auto h : hs) {
        auto x = (h - mi) / (ma - mi);
        cout << x << " ";
    }
    cout << endl;
}
