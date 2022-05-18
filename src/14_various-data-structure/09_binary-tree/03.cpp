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
};

vector<int> ans;

void rec(Node* tree) {
    if (tree == nullptr) return;
    ans.push_back(tree->v);
    rec(tree->l);
    rec(tree->r);
}

int main() {
    int q;
    cin >> q;
    auto tree = new Node;
    rep(i, 0, q) {
        int v;
        cin >> v;
        if (i == 0) {
            tree->v = v;
        } else {
            tree->insert(v);
        }
    }
    rec(tree);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}
