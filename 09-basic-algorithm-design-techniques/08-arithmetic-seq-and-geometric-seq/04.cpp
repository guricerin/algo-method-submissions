#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    i64 n, x, d;
    cin >> n >> x >> d;

    // 等差数列の総和 : (初項 + 末項) * 項数 / 2
    auto last = x + (d * (n - 1));
    auto ans = (x + last) * n / 2;
    cout << ans << endl;
}
