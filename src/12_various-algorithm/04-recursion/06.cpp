#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    vector<vector<int>> dp(n + 10, vector<int>(x + 10, -1));
    rep(i, 0, n + 10) {
        dp[i][0] = 1;
    }

    function<bool(int, int)> f = [&](int i, int j) {
        if (i == 0) {
            return j == 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j] == 1;
        }

        bool res = false;
        res |= f(i - 1, j);
        if (j - as[i - 1] >= 0) {
            res |= f(i - 1, j - as[i - 1]);
        }
        dp[i][j] = res ? 1 : 0;
        return res;
    };

    cout << (f(n, x) ? "Yes" : "No") << endl;
}
