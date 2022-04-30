#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<int> st;
    vector<int> memo(n, -1);
    rep(i, 0, n) {
        char c = s[i];
        if (c == '(') {
            st.push(i);
        } else {
            int l = st.top();
            st.pop();
            memo[i] = l, memo[l] = i;
        }
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int k;
        cin >> k;
        cout << memo[k] << endl;
    }
}
