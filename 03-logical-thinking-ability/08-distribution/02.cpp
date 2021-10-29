#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int a;
    cin >> a;
    if (a % 3 != 0) {
        cout << -1 << endl;
    } else {
        cout << a / 3 * 2 << endl;
    }
}
