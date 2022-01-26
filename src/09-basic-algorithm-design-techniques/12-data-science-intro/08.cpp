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

    auto ave = accumulate(all(as), 0) / (double)as.size();
    cout << fixed << setprecision(10);
    for (auto a : as) {
        auto b = (double)a - ave;
        cout << b << " ";
    }
    cout << endl;
}
