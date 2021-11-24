#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int a, k;
    cin >> a >> k;
    if (a % (k + 1) == 0) {
        int y = a / (k + 1);
        cout << y * k << endl;
    } else {
        cout << -1 << endl;
    }
}
