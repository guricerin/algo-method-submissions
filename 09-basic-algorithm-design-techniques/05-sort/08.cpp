#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

void to_heap_tree(vector<int>& xs) {
    int x = (xs.size() / 2) - 1;
    while (x >= 0) {
        int k = x;
        // 大きい値を上にもっていく
        while (1) {
            int li = 2 * k + 1, ri = 2 * k + 2;
            if (li >= xs.size()) break; // 子ノードをもたない

            int maxi = k;
            if (xs[k] < xs[li]) maxi = li;
            if (ri < xs.size() && xs[maxi] < xs[ri]) maxi = ri;

            if (maxi == k) {
                break;
            } else if (maxi == li) {
                swap(xs[k], xs[li]);
                k = li;
            } else if (maxi == ri) {
                swap(xs[k], xs[ri]);
                k = ri;
            }
        }
        x--;
    }
}

void heap_sort(vector<int>& tree, int m) {
    rrep(i, tree.size() - 1, 1) {
        swap(tree[0], tree[i]);
        int k = 0;
        while (1) {
            int li = 2 * k + 1, ri = 2 * k + 2;
            if (li >= i) break;

            int maxi = k;
            if (tree[maxi] < tree[li]) maxi = li;
            if (ri < i && tree[maxi] < tree[ri]) maxi = ri;

            if (maxi == k) {
                break;
            } else if (maxi == li) {
                swap(tree[k], tree[li]);
                k = li;
            } else if (maxi == ri) {
                swap(tree[k], tree[ri]);
                k = ri;
            }
        }

        if (i == m) {
            for (auto a : tree) {
                cout << a << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    to_heap_tree(as);
    heap_sort(as, m);
    for (auto a : as) {
        cout << a << " ";
    }
    cout << endl;
}
