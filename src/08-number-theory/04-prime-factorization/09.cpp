#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

i64 legendre_func(i64 n, i64 p) {
    i64 res = 0;
    while (n) {
        res += n / p;
        n /= p;
    }
    return res;
}

bool is_prime(i64 n) {
    if (n <= 1) return false;
    for (i64 p = 2; p * p <= n; p++) {
        if (n % p == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    i64 ans = 1;
    for (int p = 2; p <= n; p++) {
        if (!is_prime(p)) continue;
        auto e = legendre_func(n, p);
        ans *= (e + 1);
    }
    cout << ans << endl;
}
