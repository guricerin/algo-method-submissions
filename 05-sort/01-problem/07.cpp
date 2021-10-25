#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

struct Ty {
    int i;
    string s;
    int a;
    int b;
};

int main() {
    int n;
    cin >> n;
    vector<Ty> ts(n);
    rep(i, 0, n) {
        ts[i].i = i;
        cin >> ts[i].s >> ts[i].a >> ts[i].b;
    }

    sort(all(ts), [](Ty a, Ty b) {
        int at = a.a + a.b;
        int bt = b.a + b.b;
        if (a.a == b.a && at == bt) {
            return a.i < b.i;
        } else if (a.a == b.a) {
            return at < bt;
        } else {
            return a.a > b.a;
        }
    });
    rep(i, 0, n) {
        cout << ts[i].s << " " << ts[i].a << " " << ts[i].b << endl;
    }
}
