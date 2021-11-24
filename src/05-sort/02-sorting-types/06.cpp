#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

vector<int> msort(vector<int> xs) {
    vector<int> ls, rs;
    int mid = xs.size() / 2;
    rep(i, 0, mid) ls.push_back(xs[i]);
    rep(i, mid, xs.size()) rs.push_back(xs[i]);

    if (ls.size() > 1) {
        ls = msort(ls);
    }
    if (rs.size() > 1) {
        rs = msort(rs);
        reverse(all(rs));
    }
    ls.insert(ls.end(), all(rs));

    deque<int> q(all(ls));
    vector<int> res;
    while (!q.empty()) {
        int f = q.front(), e = q.back();
        if (f <= e) {
            res.push_back(f);
            q.pop_front();
        } else {
            res.push_back(e);
            q.pop_back();
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    auto ans = msort(as);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}
