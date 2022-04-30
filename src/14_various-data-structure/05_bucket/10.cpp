#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> bucket(500010, 0);
    rep(i, 0, n) {
        int a;
        cin >> a;
        // 約数列挙
        for (int j = 1; j * j <= a; j++) {
            if (a % j == 0) {
                bucket[j]++;
                if (j * j != a) {
                    bucket[a / j]++;
                }
            }
        }
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int x;
        cin >> x;
        cout << bucket[x] << endl;
    }
}
