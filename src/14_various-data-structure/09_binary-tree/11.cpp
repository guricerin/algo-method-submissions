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
            swap(_heap[c], _heap[p]);
            c = p;
            p = (p - 1) / 2;
        }
    }

    int pop() {
        const int res = _heap[0];
        _heap[0] = _heap.back();
        _heap.pop_back();
        int p = 0;
        int l = p * 2 + 1, r = p * 2 + 2;
        while (l < _heap.size()) {
            if (r < _heap.size()) {
                int c = l;
                if (_heap[l] < _heap[r]) {
                    c = r;
                }
                if (_heap[p] < _heap[c]) {
                    swap(_heap[p], _heap[c]);
                    p = c;
                    l = p * 2 + 1, r = p * 2 + 2;
                } else {
                    break;
                }
            } else {
                if (_heap[p] < _heap[l]) {
                    swap(_heap[p], _heap[l]);
                    p = l;
                    l = p * 2 + 1, r = p * 2 + 2;
                } else {
                    break;
                }
            }
        }
        return res;
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
        int ty;
        cin >> ty;
        if (ty == 0) {
            int v;
            cin >> v;
            heap.insert(v);
        } else {
            auto ans = heap.pop();
            cout << ans << endl;
        }
    }
    // heap.dump();
}
