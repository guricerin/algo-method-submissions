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
    double c = (double)a / (double)b;
    if (c <= -1)
        ans = 3;
    else if (c > 1)
        ans = 2;
    else
        ans = 1;
    cout << ans << endl;
}
