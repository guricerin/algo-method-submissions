#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, k;
    cin >> n >> k;
    priority_queue<i64> que;
    rep(i, 0, n) {
        i64 a;
        cin >> a;
        que.push(a);
    }

    // O(K logN)
    rep(i, 0, k) {
        auto a = que.top();
        que.pop();
        a /= 2;
        que.push(a);
    }

    i64 ans = 0;
    while (!que.empty()) {
        auto a = que.top();
        que.pop();
        ans += a;
    }
    cout << ans << endl;
}
