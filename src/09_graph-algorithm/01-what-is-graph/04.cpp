#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> as(n);
    rep(i, 0, n - 1) {
        cin >> as[i + 1];
    }

    queue<int> que;
    que.push(as[x]);
    int ans = 0;
    while (!que.empty()) {
        int ne = que.front();
        que.pop();
        ans++;
        if (ne == 0) break;
        que.push(as[ne]);
    }
    cout << ans << endl;
}
