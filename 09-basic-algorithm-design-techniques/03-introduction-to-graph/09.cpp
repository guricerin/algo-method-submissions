#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    rep(i, 0, n - 1) {
        int p;
        cin >> p;
        g[p].push_back(i + 1);
    }
    for (auto& a : g) {
        sort(all(a), [](int x, int y) {
            return x > y;
        });
    }

    stack<int> st;
    st.push(0);
    vector<bool> seen(n, false);
    vector<int> ans;
    while (!st.empty()) {
        int cur = st.top();
        st.pop();
        ans.push_back(cur);
        seen[cur] = true;
        for (auto ne : g[cur]) {
            if (seen[ne]) continue;
            st.push(ne);
        }
    }

    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}
