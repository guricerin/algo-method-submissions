#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

struct Node {
    string s;
    Node* next;
};

int main() {
    int q;
    cin >> q;
    auto root = Node{"", nullptr};
    rep(i, 0, q) {
        int t;
        cin >> t;
        if (t == 0) {
            string s;
            cin >> s;
            auto next = new Node{s, root.next};
            root.next = next;
        } else {
            if (!root.next) {
                cout << "Error" << endl;
            } else {
                cout << root.next->s << endl;
                root.next = root.next->next;
            }
        }
    }
}
