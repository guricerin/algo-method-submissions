#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

struct Node {
    int v;
    Node *par, *l, *r;

    Node(int nv) : v(nv) {
        par = nullptr, l = nullptr, r = nullptr;
    }

    void insert(int nv) {
        if (nv <= v) {
            if (l == nullptr) {
                l = new Node(nv);
                l->par = this;
            } else {
                l->insert(nv);
            }
        } else {
            if (r == nullptr) {
                r = new Node(nv);
                r->par = this;
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

    Node* min_node() {
        if (l) {
            return l->min_node();
        } else {
            return this;
        }
    }

    void print() {
        if (l) {
            l->print();
        }
        cerr << v << " ";
        if (r) {
            r->print();
        }
    }
};

struct Root {
    Node* root;

    void insert(int v) {
        if (root) {
            root->insert(v);
        } else {
            root = new Node(v);
        }
    }

    bool find(int target) {
        if (root) {
            return root->find(target);
        } else {
            return false;
        }
    }

    bool remove(int target) {
        auto cur = root;
        while (cur) {
            if (cur->v == target) {
                break;
            } else if (target < cur->v) {
                cur = cur->l;
            } else {
                cur = cur->r;
            }
        }

        if (cur == nullptr) {
            return false;
        }

        if (cur->l && cur->r) {
            int next = cur->r->min_node()->v;
            remove(next);
            cur->v = next;
        } else {
            auto par = cur->par;
            Node* ch = nullptr;
            if (cur->l) ch = cur->l;
            if (cur->r) ch = cur->r;

            if (par && ch) ch->par = par;
            if (par && par->l == cur) {
                par->l = ch;
            }
            if (par && par->r == cur) {
                par->r = ch;
            }
            delete cur;
        }

        return true;
    }

    void print() {
        if (root) {
            root->print();
            cerr << endl;
        } else {
            cerr << "No inserted node" << endl;
        }
    }
};

int main() {
    auto root = Root{};
    int q;
    cin >> q;
    rep(i, 0, q) {
        int ty, v;
        cin >> ty >> v;
        if (ty == 0) {
            root.insert(v);
        } else if (ty == 1) {
            bool ok = root.find(v);
            cout << (ok ? "Yes" : "No") << endl;
        } else {
            bool ok = root.remove(v);
            cout << (ok ? "Complete" : "Error") << endl;
        }
    }
    // root.print();
}
