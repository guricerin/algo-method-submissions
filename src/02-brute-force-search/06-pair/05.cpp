#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    rep(i, 0, n) rep(j, i + 1, n)
    {
        if (s[i] == s[j])
            ans++;
    }
    cout << ans << "\n";
}
