#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

struct Node {
    string s;
    Node* prev;
    Node* next;
};

int main() {
    auto head = new Node{"", nullptr, nullptr};
    auto tail = new Node{"", head, nullptr};
    head->next = tail;
    int q;
    cin >> q;
    rep(i, 0, q) {
        int t;
        cin >> t;
        if (t == 0) {
            string s;
            cin >> s;
            auto a = new Node{s, head, head->next};
            head->next->prev = a;
            head->next = a;
        } else {
            if (head == tail->prev) {
                cout << "Error" << endl;
            } else {
                auto a = tail->prev;
                cout << a->s << endl;
                a->prev->next = tail;
                tail->prev = a->prev;
                delete a;
            }
        }
    }
}
