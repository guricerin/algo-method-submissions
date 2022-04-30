#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    rep(i, 0, n) {
        string s;
        cin >> s;
        sort(all(s));
        mp[s]++;
    }

    i64 denom = (i64)n * (i64)(n - 1) / 2;
    i64 numer = 0;
    for (auto [k, v] : mp) {
        numer += (i64)v * (i64)(v - 1) / 2;
    }
    double ans = (double)numer / (double)denom;
    cout << setprecision(12) << ans << endl;
}
