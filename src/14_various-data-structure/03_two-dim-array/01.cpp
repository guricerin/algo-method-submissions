#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    string t;
    cin >> t;
    vector<vector<string>> ss(n, vector<string>());
    rep(i, 0, n) {
        int m;
        cin >> m;
        rep(j, 0, m) {
            string s;
            cin >> s;
            ss[i].push_back(s);
        }
    }

    int ans = 0;
    rep(i, 0, n) {
        for (auto s : ss[i]) {
            if (s == t) {
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
}
