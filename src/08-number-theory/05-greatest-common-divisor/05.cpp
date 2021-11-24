#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

map<i64, i64> prime_factors(i64 n) {
    map<i64, i64> res; // factor, num
    for (i64 p = 2; p * p <= n; p++) {
        while (n % p == 0) {
            res[p]++;
            n /= p;
        }
    }
    if (n != 1) res[n] = 1;
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<i64> as(n);
    rep(i, 0, n) {
        cin >> as[i];
    }

    // 最大公約数の約数の個数が答え
    auto g = as[0];
    rep(i, 1, n) {
        g = gcd(g, as[i]);
    }
    auto ps = prime_factors(g);
    int ans = 1;
    for (auto [p, e] : ps) {
        ans *= (e + 1);
    }
    cout << ans << endl;
}
