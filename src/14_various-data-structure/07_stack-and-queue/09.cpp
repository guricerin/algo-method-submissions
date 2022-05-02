#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int q;
    cin >> q;
    queue<string> que;
    rep(i, 0, q) {
        int ty;
        cin >> ty;
        if (ty == 0) {
            string s;
            cin >> s;
            que.push(s);
        } else {
            cout << que.front() << endl;
            que.pop();
        }
    }
}
