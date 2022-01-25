#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> as(n + 1);
    rep(i, 0, n + 1) cin >> as[i];

    vector<int> bs(n + 2);
    bs[0] = 0;
    rep(i, 0, n + 1) {
        bs[i + 1] = as[i] / (i + 1);
    }

    for (auto b : bs) {
        cout << b << " ";
    }
    cout << endl;
}
