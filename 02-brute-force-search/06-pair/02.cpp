#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int l, r;
    cin >> l >> r;
    int ans = 0;
    rep(i, l, r + 1) rep(j, i + 1, r + 1)
    {
        if (i % 10 == j % 10)
            ans++;
    }
    cout << ans << "\n";
}
