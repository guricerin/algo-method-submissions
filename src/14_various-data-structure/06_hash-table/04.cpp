#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    map<string, int> mp;
    rep(i, 0, n) {
        string s;
        cin >> s;
        mp[s]++;
    }
    int q;
    cin >> q;
    rep(i, 0, q) {
        int type;
        string t;
        cin >> type >> t;
        if (type == 0) {
            mp[t]++;
        } else if (type == 1) {
            mp[t] = 0;
        } else {
            cout << mp[t] << endl;
        }
    }
}
