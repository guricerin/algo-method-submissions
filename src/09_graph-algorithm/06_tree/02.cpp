#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int h, w;
    cin >> h >> w;
    // 1*1の正方形1つにつき、辺を1本削除可能。
    int ans = (h - 1) * (w - 1);
    cout << ans << endl;
}
