#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

vector<int> as;

bool f(int i, int j) {
    if (i == 0) {
        return j == 0;
    }

    bool res = false;
    res |= f(i - 1, j);
    if (j - as[i - 1] >= 0) {
        res |= f(i - 1, j - as[i - 1]);
    }
    return res;
}

int main() {
    int n, x;
    cin >> n >> x;
    as = vector<int>(n);
    rep(i, 0, n) cin >> as[i];

    cout << (f(n, x) ? "Yes" : "No") << endl;
}
