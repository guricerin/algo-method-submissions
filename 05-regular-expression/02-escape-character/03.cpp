#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    string s;
    cin >> s;
    regex re(R"(^([a-z]+\-)*[a-z]+)");
    cout << (regex_match(s, re) ? "Yes" : "No") << endl;
}
