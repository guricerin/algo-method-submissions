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

    vector<string> cand;
    int m = pow(n, 3);
    rep(i, 0, n) rep(j, 0, n) rep(k, 0, n) {
        cand.push_back(to_string(as[i]) + to_string(as[j]) + to_string(as[k]));
    }

    int ans = 0;
    rep(i, 0, 10) rep(j, 0, 10) rep(k, 0, 10) {
        string a = to_string(i) + to_string(j) + to_string(k);
        if (find(all(cand), a) != cand.end()) {
            ans++;
        }
    }
    cout << ans << endl;
}
