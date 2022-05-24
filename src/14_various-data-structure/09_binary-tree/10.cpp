#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

struct Heap {
    vector<int> _heap;

    Heap(int n) {
        _heap = vector<int>(n);
    }

    void insert(int v) {
        _heap.push_back(v);
        int c = _heap.size() - 1;
        int p = (c - 1) / 2;
        while (c >= 0 && p >= 0 && _heap[c] > _heap[p]) {
            auto tmp = _heap[p];
            _heap[p] = _heap[c];
            _heap[c] = tmp;
            c = p;
            p = (p - 1) / 2;
        }
    }

    void dump() {
        for (auto v : _heap) {
            cout << v << " ";
        }
        cout << endl;
    }
};

int main() {
    int q;
    cin >> q;
    auto heap = Heap(0);
    rep(i, 0, q) {
        int v;
        cin >> v;
        heap.insert(v);
    }
    heap.dump();
}
