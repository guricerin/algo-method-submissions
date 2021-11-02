#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    int ans = 1;
    rep(i, 0, n) {
        int a;
        cin >> a;
        ans = (ans * a) % 10;
    }
    cout << ans << endl;
}
