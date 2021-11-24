#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

struct UnionFind {
    vector<int> _par, _rank, _siz;

    UnionFind(int n) : _par(n, -1), _rank(n, 0), _siz(n, -1) {}

    // 根を求める
    int root(int x) {
        if (_par[x] == -1)
            return x; // x が根の場合は x を返す
        else
            return _par[x] = root(_par[x]); // 経路圧縮
    }

    // x と y が同じグループに属するか (= 根が一致するか)
    bool connected(int x, int y) {
        return root(x) == root(y);
    }

    // x を含むグループと y を含むグループを併合する
    bool unite(int x, int y) {
        int rx = root(x), ry = root(y); // x 側と y 側の根を取得する
        if (rx == ry) return false;     // すでに同じグループのときは何もしない
        // union by _rank
        // if (_siz[rx] < _siz[ry]) swap(rx, ry);   // ry 側の _rank が小さくなるようにする
        if (_siz[rx] < _siz[ry]) swap(rx, ry);   // ry 側の _rank が小さくなるようにする
        _par[ry] = rx;                           // ry を rx の子とする
        if (_rank[rx] == _rank[ry]) _rank[rx]++; // rx 側の _rank を調整する
        _siz[rx] += _siz[ry];                    // rx 側の _siz を調整する
        return true;
    }

    // x を含む根付き木のサイズを求める
    int size(int x) {
        return _siz[root(x)];
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    auto uni = UnionFind(n);
    int ans = n;
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        if (uni.root(a) != uni.root(b)) {
            ans--;
        }
        uni.unite(a, b);
        cout << ans << endl;
    }
}
