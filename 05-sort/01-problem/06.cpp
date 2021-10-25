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
    rep(i, 0, n) cin >> as[i];

    vector<int> ps(n, 0);
    rep(i, 0, n) {
        ps[as[i]]++;
    }
    // 得票数、その得票数を得た者の番号
    map<int, set<int>> mp;
    rep(i, 0, n) {
        mp[ps[i]].insert(i);
    }
    auto ranks = ps;
    sort(all(ranks), [](int a, int b) {
        return a > b;
    });
    ranks.erase(unique(all(ranks)), ranks.end());
    for (auto r : ranks) {
        auto ss = mp[r];
        for (auto s : ss) {
            cout << s << " " << r << endl;
        }
    }
}
