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
    bool ok = true;
    rep(i, 0, n) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            if (st.empty()) {
                ok = false;
                break;
            }
            st.pop();
        }
    }

    if (!st.empty()) ok = false;

    cout << (ok ? "Yes" : "No") << endl;
}
