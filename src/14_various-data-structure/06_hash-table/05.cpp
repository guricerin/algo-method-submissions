#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    set<string> st;
    rep(i, 0, n) {
        string s;
        cin >> s;
        st.insert(s);
    }
    cout << st.size() << endl;
}
