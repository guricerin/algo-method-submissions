#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> ans(n);
    rep(i, 0, n) {
        int a;
        cin >> a;
        ans[i] = a * k;
    }

    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}
