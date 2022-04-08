#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) {
        cin >> as[i];
    }
    const int nil = -1;
    vector<int> front(n, nil), back(n, nil);
    rep(i, 0, n - 1) {
        int f = as[i], b = as[i + 1];
        front[b] = f;
        back[f] = b;
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int t, v;
        cin >> t >> v;
        if (t == 0) {
            int f = front[v], b = back[v];
            if (f == nil) {
                cout << "Error" << endl;
            } else {
                cout << f << endl;
                front[v] = front[f];
                if (front[f] != nil) {
                    back[front[f]] = v;
                }
                front[f] = v;
                back[v] = f;
                back[f] = b;
                if (b != nil) {
                    front[b] = f;
                }
            }
        } else {
            int f = front[v], b = back[v];
            if (f != nil) {
                back[f] = b;
            }
            if (b != nil) {
                front[b] = f;
            }
            front[v] = nil, back[v] = nil;
        }
    }
}
