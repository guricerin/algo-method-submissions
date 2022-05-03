#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    i64 x;
    cin >> x;
    int q;
    cin >> q;
    int done = 0;
    queue<i64> tasks;
    rep(i, 0, q) {
        int ty;
        cin >> ty;
        i64 t;
        cin >> t;
        if (ty == 0) {
            tasks.push(t + x);
        } else {
            while (!tasks.empty() && tasks.front() <= t) {
                tasks.pop();
                done++;
            }
            cout << done << endl;
        }
    }
}
