#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

vector<int> heap_tree(const vector<int>& xs) {
    auto res = xs;
    int x = (res.size() / 2) - 1;
    while (x >= 0) {
        int k = x;
        // 大きい値を上にもっていく
        while (1) {
            int li = 2 * k + 1, ri = 2 * k + 2;
            if (li >= res.size()) break; // 子ノードをもたない

            int maxi = k;
            if (res[k] < res[li]) maxi = li;
            if (ri < res.size() && res[maxi] < res[ri]) maxi = ri;

            if (maxi == k) {
                break;
            } else if (maxi == li) {
                swap(res[k], res[li]);
                k = li;
            } else if (maxi == ri) {
                swap(res[k], res[ri]);
                k = ri;
            }
        }
        x--;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    auto ans = heap_tree(as);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}
