#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int x, d;
    cin >> x >> d;
    int ans = 0;
    if (d == 0)
        ans = 1;
    else if (d > 0)
        ans = 2;
    else
        ans = 3;
    cout << ans << endl;
}
