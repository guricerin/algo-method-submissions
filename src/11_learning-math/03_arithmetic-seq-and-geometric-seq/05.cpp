#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    i64 n;
    cin >> n;

    // 途中で計算ミス
    // auto ans = (n * n * n) / 3 + (n * n) / 2 + (n / 6);
    auto ans = n * (n + 1) * (2 * n + 1) / 6;
    cout << ans << endl;
}
