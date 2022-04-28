#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

i64 calc_hash(string s) {
    const i64 b = 30, m = 1000003;
    i64 res = 0;
    rep(i, 0, s.size()) {
        i64 c = s[s.size() - 1 - i] - 'a' + 1;
        res += (c * (i64)pow(b, i)) % m;
    }
    return res % m;
}

int main() {
    int n;
    cin >> n;
    map<i64, int> mp;
    rep(i, 0, n) {
        string s;
        cin >> s;
        i64 h = calc_hash(s);
        mp[h]++;
    }

    int ans = 0;
    for (auto h : mp) {
        ans = max(ans, h.second);
    }
    cout << ans << endl;
}
