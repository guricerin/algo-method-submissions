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
    auto root = Node{"root", nullptr};
    int Q;
    cin >> Q;
    rep(i, 0, Q) {
        int t;
        cin >> t;
        if (t == 0) {
            string s;
            cin >> s;
            if (!root.next) {
                auto next = new Node{s, nullptr};
                root.next = next;
            } else {
                auto cur = root.next;
                auto next = new Node{s, cur};
                root.next = next;
            }
        } else {
            int k;
            cin >> k;
            auto cur = root.next;
            rep(i, 0, k) {
                if (!cur) break;
                cout << cur->s << " ";
                cur = cur->next;
            }
            cout << endl;
        }
    }
}
