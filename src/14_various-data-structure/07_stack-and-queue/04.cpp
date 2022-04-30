#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    string x;
    cin >> x;
    int n;
    cin >> n;
    stack<int> st;
    rep(i, 0, n) {
        string s;
        cin >> s;
        if (s == "+") {
            int r = st.top();
            st.pop();
            int l = st.top();
            st.pop();
            st.push(l + r);
        } else if (s == "-") {
            int r = st.top();
            st.pop();
            int l = st.top();
            st.pop();
            st.push(l - r);
        } else if (s == "*") {
            int r = st.top();
            st.pop();
            int l = st.top();
            st.pop();
            st.push(l * r);
        } else {
            int a = stoi(s);
            st.push(a);
        }
    }
    cout << x << "=" << st.top() << endl;
}
