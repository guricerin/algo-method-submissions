#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

vector<int> bucket_sort(const vector<int>& xs) {
    vector<int> nums(xs.size() + 1, 0);
    rep(i, 0, xs.size()) {
        nums[xs[i]]++;
    }
    vector<int> acc(xs.size() + 1, 0);
    acc[0] = nums[0];
    rep(i, 0, xs.size()) {
        acc[i + 1] = acc[i] + nums[i + 1];
    }

    vector<int> res(xs.size() + 1, 0);
    rep(i, 0, xs.size()) {
        acc[xs[i]]--;
        res[acc[xs[i]]] = xs[i];
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    auto ans = bucket_sort(as);
    rep(i, 0, n) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
