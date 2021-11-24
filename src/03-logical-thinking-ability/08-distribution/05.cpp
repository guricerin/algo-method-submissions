#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int y = (b + a) / (k + 1);
    int x = b - y;
    if (x >= 0 && (b + a) % (k + 1) == 0) {
        cout << x << endl;
    } else {
        cout << -1 << endl;
    }
}
