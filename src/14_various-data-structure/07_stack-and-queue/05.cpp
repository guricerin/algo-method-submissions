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
    rep(i, 0, n) {
        char c = s[i];
        if (c == '(') {
            st.push(i);
        } else {
            int p = st.top();
            st.pop();
            if (p == 0) {
                cout << i << endl;
                return 0;
            }
        }
    }
}
