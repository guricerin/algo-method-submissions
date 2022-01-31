#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    string s;
    cin >> s;
    string a;
    while (cin >> a) {
        s += " " + a;
    }

    regex re(R"(asian(?=(\s\w+){5,}))");
    string ans = regex_replace(s, re, "global");
    cout << ans << endl;
}
