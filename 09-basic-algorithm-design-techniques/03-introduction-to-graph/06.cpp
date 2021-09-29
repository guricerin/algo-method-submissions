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
    rep(i, 0, n - 1) cin >> as[i + 1];
    as[0] = -1;

    rep(i, 1, n) {
        queue<int> q;
        q.push(as[i]);
        int ans = 0;
        while (!q.empty()) {
            ans++;
            int ne = q.front();
            q.pop();
            if (ne == 0) break;
            q.push(as[ne]);
        }
        cout << ans << endl;
    }
}
