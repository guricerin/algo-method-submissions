#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    const int len = 500010;
    vector<int> bucket(len, 0);
    rep(i, 0, n) {
        int a;
        cin >> a;
        bucket[a]++;
    }

    int ma = 0;
    int ans = len;
    rrep(i, len - 1, 0) {
        if (ma <= bucket[i]) {
            ma = bucket[i];
            ans = i;
        }
    }
    cout << ans << endl;
}
