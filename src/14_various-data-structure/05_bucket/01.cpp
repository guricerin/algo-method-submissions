#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    map<int, int> mp;
    rep(i, 0, n) {
        int a;
        cin >> a;
        mp[a] += 1;
    }
    int q;
    cin >> q;
    rep(i, 0, q) {
        int x;
        cin >> x;
        cout << mp[x] << endl;
    }
}
