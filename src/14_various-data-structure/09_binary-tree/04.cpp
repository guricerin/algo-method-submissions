#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

struct Node {
    int v;
    Node *l, *r;

    void insert(int nv) {
        if (nv <= v) {
            if (l == nullptr) {
                l = new Node;
                l->v = nv;
            } else {
                l->insert(nv);
            }
        } else {
            if (r == nullptr) {
                r = new Node;
                r->v = nv;
            } else {
                r->insert(nv);
            }
        }
    }

    bool find(int target) {
        if (v == target) {
            return true;
        }

        if (target < v && l != nullptr) {
            return l->find(target);
        } else if (target > v && r != nullptr) {
            return r->find(target);
        } else {
            return false;
        }
    }
};

int main() {
    auto tree = new Node;
    int q;
    cin >> q;
    rep(i, 0, q) {
        int ty, v;
        cin >> ty >> v;
        if (ty == 0) {
            if (tree->v = 0) {
                tree->v = v;
            } else {
                tree->insert(v);
            }
        } else {
            bool ok = tree->find(v);
            cout << (ok ? "Yes" : "No") << endl;
        }
    }
}
