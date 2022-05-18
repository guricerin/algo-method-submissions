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
    auto tree = new Node;
    tree->v = 5;
    vector<int> key = {2, 3, 7, 9, 4, 1, 6, 8};
    for (auto k : key) {
        tree->insert(k);
    }
    rec(tree);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}
