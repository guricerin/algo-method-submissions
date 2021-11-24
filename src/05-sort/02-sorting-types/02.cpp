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

    rep(i, 0, n - 1) {
        int min = as[i];
        int minj = i;
        rep(j, i + 1, n) {
            if (min > as[j]) {
                min = as[j];
                minj = j;
            }
        }
        swap(as[i], as[minj]);

        rep(j, 0, n) {
            cout << as[j] << " ";
        }
        cout << endl;
    }
}
