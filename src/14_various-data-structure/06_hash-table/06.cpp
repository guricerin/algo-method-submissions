#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    rep(i, 0, n) {
        int a;
        cin >> a;
        mp[a]++;
    }

    int ans = 0;
    for (auto p : mp) {
        ans += p.second - 1;
    }
    cout << ans << endl;
}
