#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    // 最小公倍数の倍数が [1,n] にどれだけあるかを求める
    int z = lcm(x, y);
    cout << n / z << endl;
}
