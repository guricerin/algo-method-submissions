#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    i64 n;
    cin >> n;

    i64 a0 = 1;
    auto last = a0 * (i64)pow(2, n);
    auto ans = -a0 + last;
    cout << ans << endl;
}
