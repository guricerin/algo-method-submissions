#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

struct Task {
    int t;
    int d;
    string s;
};

int main() {
    int q;
    cin >> q;
    auto comp = [](Task a, Task b) {
        if (a.d == b.d) {
            return a.t > b.t;
        } else {
            return a.d > b.d;
        }
    };
    priority_queue<Task, vector<Task>, decltype(comp)> que{comp};
    rep(i, 0, q) {
        int ty;
        cin >> ty;
        if (ty == 0) {
            int d;
            string s;
            cin >> d >> s;
            auto t = Task{i, d, s};
            que.push(t);
        } else {
            auto t = que.top();
            que.pop();
            cout << t.s << endl;
        }
    }
}
