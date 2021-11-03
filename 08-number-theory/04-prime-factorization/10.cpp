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

int main() {
    int n;
    cin >> n;
    auto two = legendre_func(n, 2);
    auto five = legendre_func(n, 5);
    cout << min(two, five) << endl;
}
