#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a < 0) {
        if (abs(a) < b)
            ans = 1;
        else
            ans = 3;
    } else if (a > b)
        ans = 2;
    else
        ans = 1;
    cout << ans << endl;
}
