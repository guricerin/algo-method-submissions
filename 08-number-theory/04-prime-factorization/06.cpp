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

int mobius(i64 n) {
    if (n == 1) return 1;
    auto ps = prime_factors(n);
    for (auto& [p, e] : ps) {
        if (e >= 2) return 0;
    }

    if (ps.size() % 2 == 0) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    i64 n;
    cin >> n;
    cout << mobius(n) << endl;
}
