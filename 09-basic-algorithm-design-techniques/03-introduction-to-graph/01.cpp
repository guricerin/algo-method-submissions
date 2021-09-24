#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<string> ss(n);
    rep(i, 0, n) cin >> ss[i];

    string ans = (ss[a][b] == 'o') ? "Yes" : "No";
    cout << ans << endl;
}
