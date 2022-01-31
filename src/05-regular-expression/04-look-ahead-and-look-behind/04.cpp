#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n, y, m;
    cin >> n >> y >> m;
    vector<string> ss(n);
    rep(i, 0, n) cin >> ss[i];

    string ms;
    if (m < 10)
        ms = "0" + to_string(m);
    else
        ms = to_string(m);
    string ym = to_string(y) + ms;
    // C++は後読みをサポートしていないので以下のような遠回りな実装になった
    // が、想定回答では [^_]+(?=_YYYYMM\d{2}\.pdf) でいけるらしい
    // regex re("(?<=\\d+_).*(?=_" + ym + "\\d{2}.pdf)");
    string r = string{".*(?=_"} + ym + string{"\\d{2}.pdf)"};
    regex re(r);
    smatch res;
    rep(i, 0, n) {
        if (regex_search(ss[i], res, re)) {
            regex ree(R"(\d+_)");
            smatch ress;
            string hoge = res.str();
            if (regex_search(hoge, ress, ree)) {
                cout << hoge.substr(ress.position() + ress.length()) << endl;
            }
        }
    }
}
