#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n;
    cin >> n;
    string ans = "1";
    rep(i, 0, n)
    {
        ans += "0";
    }
    cout << ans << "\n";
}
