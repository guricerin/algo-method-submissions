#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) {
        cin >> as[i];
    }

    rep(i, 1, n) {
        int p = i;
        while (p > 0 && as[p - 1] > as[p]) {
            swap(as[p - 1], as[p]);
            p--;
        }

        for (auto a : as) {
            cout << a << " ";
        }
        cout << endl;
    }
}
