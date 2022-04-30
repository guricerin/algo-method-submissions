#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

struct Queue {
    int head, tail;
    vector<int> as;

    Queue(int n) : head(0), tail(0) {
        as = vector<int>(n, -1);
    }

    void push(int v) {
        as[tail] = v;
        tail = (tail + 1) % as.size();
    }

    void pop() {
        as[head] = -1;
        head = (head + 1) % as.size();
    }
};

int main() {
    int n, q;
    cin >> n >> q;
    auto que = Queue(n);
    rep(i, 0, q) {
        int ty;
        cin >> ty;
        if (ty == 0) {
            int v;
            cin >> v;
            que.push(v);
        } else {
            que.pop();
        }
    }
    rep(i, 0, n) {
        cout << que.as[i] << endl;
    }
}
