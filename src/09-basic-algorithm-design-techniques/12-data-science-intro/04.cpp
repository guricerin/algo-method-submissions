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

    vector<int> cnt(101, 0);
    for (auto a : as) {
        cnt[a]++;
    }
    auto mx = *max_element(all(cnt));
    vector<int> ans;
    rep(i, 0, 101) {
        if (cnt[i] == mx) {
            ans.push_back(i);
        }
    }
    sort(all(ans));
    for (auto a : ans) {
        cout << a << endl;
    }
}
