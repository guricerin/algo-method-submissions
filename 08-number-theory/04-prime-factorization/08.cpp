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
    i64 n;
    cin >> n;
    auto ps = prime_factors(n);
    cout << ps.size() + 1 << endl;
}
