#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

vector<i64> fib;

i64 f(int x) {
    if (fib[x] != -1) return fib[x];
    auto y = f(x - 1) + f(x - 2);
    fib[x] = y;
    return y;
}

int main() {
    int n;
    cin >> n;
    fib = vector<i64>(n + 1, -1);
    fib[0] = 0, fib[1] = 1;
    cout << f(n) << endl;
}
